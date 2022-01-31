 gcc -g p1original.c
 gdb ./a.out
GNU gdb (Ubuntu 8.1.1-0ubuntu1) 8.1.1
Copyright (C) 2018 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from ./a.out...done.
(gdb) b main
Breakpoint 1 at 0x81c: file p1original.c, line 20.
(gdb) r
Starting program: /home/runner/pps-IA1-practice/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p1original.c:20
20  {
(gdb) n
22    input(&a,&b);
(gdb) s
input (a=0x7fff6bd0468c, b=0x7fff6bd04690) at p1original.c:4
4     printf("enter the fist number\n");
(gdb) n
enter the fist number
5     scanf("%d",a);
(gdb) n
5
6       printf("enter the second number\n");
(gdb) n
enter the second number
7     scanf("%d",b);
(gdb) n
6
8   }
(gdb) n
main () at p1original.c:23
23    add(a,b,&sum);
(gdb) s
add (a=5, b=6, sum=0x7fff6bd04694) at p1original.c:12
12    *sum=a+b;
(gdb) n
13  }
(gdb) n
main () at p1original.c:24
24    output(a,b,sum);
(gdb) s
output (a=5, b=6, sum=11) at p1original.c:16
16    printf("%d + %d = %d",a,b,sum);
(gdb) n
17  }
(gdb) n
main () at p1original.c:25
25    return 0;
(gdb) n
26  }(gdb) n
__libc_start_main (main=0x5561b2a00814 <main>, argc=1, argv=0x7fff6bd04788, 
    init=<optimized out>, fini=<optimized out>, rtld_fini=<optimized out>, 
    stack_end=0x7fff6bd04778) at ../csu/libc-start.c:344
344 ../csu/libc-start.c: No such file or directory.
(gdb) n
5 + 6 = 11[Inferior 1 (process 562) exited normally]
(gdb) n
The program is not being run.
(gdb) 