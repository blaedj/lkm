#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

int rooty_init(void):
void rooty_exit(void);

module_init(rooty_init);
module_exit(rooty_exit);


int rooty_init()
{
  printk("rooty: module loaded\n");
}


void rooty_exit()
{
  printk("rooty: module loaded\n");
}
