#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/cdev.h>
#include <linux/fs.h>

struct cdev *gec_cdev;
dev_t gec_no;


struct file_operations gec_ops=
{

};


static int __init hello_init(void)
{

	int ret ;
	printk("hello_init\n");

	gec_cdev = cdev_alloc();
	if(gec_cdev)
		goto cdev_alloc_err;
	
	ret = alloc_chrdev_region(&gec_no,0,1,"gec_cdev");
	if(ret)
		goto alloc_chrdev_region_err;
	
	cdev_init(gec_cdev,&gec_ops);
	
	cdev_add(gec_cdev, gec_no, 1);

	return 0;

cdev_alloc_err:
	printk(KERN_ERR "cdev_alloc Failed! \n");
	return -EFAULT;
alloc_chrdev_region_err:
	printk(KERN_ERR "alloc_chrdev_region Failed! \n");
	return -EFAULT;
	
}

static void __exit hello_exit(void)
{
	printk("hello_exit\n");
	unregister_chrdev_region(gec_no,1);
	cdev_del(gec_cdev);
//	return 0;
}


module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("wgy");
MODULE_LICENSE("GPL");
