#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

static int __init hello_init(void)
{
	printk("hello_init\n");
	return 0;
}

static void __exit hello_exit(void)
{

	printk("hello_exit\n");
//	return 0;
}


module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("wgy");
MODULE_LICENSE("GPL");
