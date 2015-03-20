#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x458e58b9, "module_layout" },
	{ 0x1300d1c3, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd909e778, "alloc_disk" },
	{ 0xb34d9ebe, "blk_cleanup_queue" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x3a9b6fb9, "blk_unregister_region" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xd046ce09, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xff964b25, "param_set_int" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xd1e890f9, "kunmap_atomic" },
	{ 0xf3a919f, "kmap_atomic" },
	{ 0xe3cad39f, "blk_alloc_queue" },
	{ 0xb72397d5, "printk" },
	{ 0xeac5425e, "del_gendisk" },
	{ 0xb4390f9a, "mcount" },
	{ 0xd9d0de6, "blk_register_region" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2ca04a55, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x2909b8a1, "get_disk" },
	{ 0xd27e77f3, "bio_endio" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xe421fbc, "blk_queue_bounce_limit" },
	{ 0x7f7bfb9e, "kmem_cache_alloc" },
	{ 0xd6b33026, "cpu_khz" },
	{ 0xc2c1127a, "blk_queue_make_request" },
	{ 0x24d8390, "put_disk" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe09c727, "add_disk" },
	{ 0xf365c7f7, "blk_queue_ordered" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7E7E9D01B116A90DB85967D");
