#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/sched.h>

static char *whom = "world";
static int howmany = 1;
module_param(howmany,int,S_IRUGO);
module_param(whom,charp,S_IRUGO);

/*
 __init是用于初始化的修饰符
 */
static int __init hello_init(void)
{
	while(!(howmany < 1))
	{
		printk(KERN_ALERT "Hello, %s\n",whom);
		howmany--;
	}
	printk(KERN_INFO "The process is \"%s\" (pid %i)\n", current->comm,current->pid);
	//printk(KERN_ALERT "Hello, world\n");
	return 0;
}

static void __exit hello_exit(void)
{
	printk(KERN_ALERT "Goodbye, cruel world\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
