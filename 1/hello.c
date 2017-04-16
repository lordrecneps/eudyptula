/**
 * Eudyptula Challenge Task 01
 * Spencer McLaughlin
 * I referred to http://www.tldp.org/LDP/lkmpg/2.6/html/x121.html and
 * the Linux modules documentation while doing this task.
 */

#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

static int __init init_hello_world(void) {
  printk(KERN_DEBUG "Hello World!\n");
  return 0;
}

static void __exit exit_hello_world(void) {
  printk(KERN_DEBUG "Goodbye cruel world\n");
}

module_init(init_hello_world);
module_exit(exit_hello_world);

