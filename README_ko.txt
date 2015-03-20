PCMSIM 메뉴얼.

0. 프롤로그
모듈을 올리거나 하는 부분들은 sudo 루트 권한으로 진행해야 한다.
각 과정마다 시간이 조금 걸릴 수 있다.

1. 커널 2.6.x 버전.
리눅스 커널 2.6 버전에서만 됨. 커널 컴파일 해서 커널 버전을 맞춘다.
버전이 안맞으면 make 부터 알수 없는 오류가 뜬다!

2. make
그냥 메이크 하면 같은 디렉토리에 .ko 파일이 생성된다.

3. 하드코딩 된 memory.c의 파라미터를 수정해야 한다.
그 변수는 다름 5개이다.

45         memory_ddr_version
46         memory_ddr_rating
47         memory_tRCD
48         memory_tRP
49         memory_tCL10 (this is the value of the CL parameter x 10)

// 디디알 버전인듯.
memory_ddr_version = 3 

// 클락인듯.
memory_ddr_rating = 1333

/* 
 * 출처1 : https://www.avito.ru/moskva/tovary_dlya_kompyutera/samsung_m378b5273ch0-ch9_527464240
 * 출처2 : http://www.aport.ru/samsung_m378b5273dh0-ch9/mod263631
 */
memory_tRCD = 9
memory_tRP = 9
memory_tCL10 = 90

// 이하 3개는 무슨 클럭 관련..
상세 링크 : http://windy.luru.net/1074


# lm_sensors 설치
하드웨어 정보를 알 수 있는 시스템 소프트웨어 인가보다.
참고 : https://wiki.archlinux.org/index.php/Lm_sensors

# sudo apt-get install lm-sensors libsensors4
# sudo apt-get install i2c-tools
# sensors-detect
  나오는 메뉴마다  <엔터>키를 누룹니다.

# 에러!
$ sudo insmod pcmsim.ko 
=> could not insert module pcmsim.ko: Cannot allocate memory

dmesg 찍어보면 용량 문제가 생긴다.
module.c에 70라인에 있는 pcmsim_capacity_mb을 적게 바꿔준다.
128, 1024를 64, 512로 바꾸니까 에러가 안생긴다!

# 모듈 
module.c에 있는 pcmsim_init()부터.

# 파일시스템을 끼얹는다.
sudo mkfs -t ext4 /dev/pcm0

# IO 밴치마크를 돌리자.
phoronix, bonnie, iozone 같은 밴치마크 유틸리티가 있다.

# iozone으로 밴치마킹을 하자.
사용법 : http://dra700.azurewebsites.net/?p=184
iozone -Rab output.wks
결과는 엑셀 파일 형식으로 나오는데, 윈도우로 다운받아서 엑셀로 까보면 된다.

add
