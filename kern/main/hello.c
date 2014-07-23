/*######################################################################################
 * Author: Devin Ercolano                                                              #
 * Date: 7/19/14                                                                       #
 * Title: hello.c                                                                      #
 * Description: a function called hello that uses kprintf() to print "Hello World".    #
 * #####################################################################################
 */
 
#include <types.h>
#include <lib.h>

void hello(void){
	kprintf("Hello, World\n");
}

