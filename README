#################################
# Author: Devin Ercolano	#
# OS/161			#
#				#
#################################

My os161 repository holds a modified kernel inside OS/161 that I modified. I wrote an additional test and saved it in "test" directory to the test menu called printmessage. That program accepts the pm command line argument from the console and prints its message. The program also spawns another thread and print its thread name.

Q) What is the kernel test menu?

The kernel test menu is a directory that holds programs to verify that the kernel is running correctly.


Q) Which of the kernel system tests run and which crash? How do they crash?

ys2 and sys3 will fail until the sync assignment is complete. fs2 and fs5 will fail until the file systmes are assigned. Running out of memory crashes the system because memory does not get cleared out automatically. It cannot run the lock test sys2 because locks are not implemented. It cannot run the CV test, sys3, because condition variables are not implemented. It would be helpful to write a program to manage memory.

Q) How do you run user programs from the OS/161 command prompt?

-Create a file containing the program and place it in the kernel's "test" or other directory containing program.c files.
-Create a header file for the program in the kernel's "include" directory.
-Recompile
-Go into sys161, navigate to the menu of programs you placed it in, and perfom its command.
