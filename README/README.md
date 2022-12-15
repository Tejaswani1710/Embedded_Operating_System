# Embedded Operating System

## Day 1

- General Purpose System
- Embedded System
    - Specific or dedicated functionality
- System
     - Hardware
        - CPU
            - Program counter(PC)/Instruction Pointer(IP)
            - Flag
            - Stack Pointer(SP)
            - General Purpose Register(GPR)
            - Memory
            - I/O(Peripherals)
        - Algorithm
            - Instructions
            - Data
```
- Git Commands
    - git add *(to add folders)
    - git add __________(to add all the files in one folder)
    - git status    
    - git commit -m "Message"
    - git log
```
- How to create your library
    - create your .c files (mul.c,div.c,main.c) 
    - create a make file(touch Makefile) 
        - main: and include all .o files(main.o,mul.o,div.o)
        - write command to compile this main(gcc -o main main.o mul.o div.o)
        - define all .o files(main.o: main.c ....) and compile them separately(gcc -c -o main.o main.c.........)
    - give command git add *
    - give command make
    - execute your main file (./main)
    - create your .h file(touch arith.h)
        - in .h file write the prototypes of yuor functions.
    - give command ar crv lib________(libarith.a) and your functions .o files(ar crv libarith.a add.o sub.o)
    - give command ls and see whether your header file or lib is created or not
- Now you can give that .h and .a file to your friend.
- How to use use friends header file or lib in your program
    - copy paste your friends .h and .a file in your program folder.
    - include those header files and functions in your program.
    - include those header file in makefile like -l_______(-larithmetic)
    - give command make
    - and execute now ./main



## DAY 2

- Stack, stack pointer, stack frame
- Stack frame
    - Return address
    - Arguments
    - Local variables
- How arguments are passed to function ?
    - Register & stack
    - ARM
        - =>Arguments(R0-R3)
        - =>More than 4 arguments then STACK
- Frame Pointer
    - It is used to access the arguments & local variable.
    - Every stack frame has different frame pointer.
- Sections
    - .text -> instructions
    - .data -> initialized global variable
    - .bss -> uninitialized global variable
    - heap -> dynamic memory allocation
    - stack -> local variable
- Program
    - Dormant entity
    - hard disk/secondary storage
- Process 
    - Active entity
    - Program under execution
    - ID (Process ID)
- Process Tree
    - Process ID: getpid()
    - Parent ID: getppid()


## DAY 3
- Fork 
    - to create a child process.
- Static and dynamic library/shared library
- Parallelism
    - True
    - Psuedo
- Difference between static & dynamic library


## DAY 4
- User Space
- Kernel space
- System call
    - Open
    - Read
    - Write
    - Close
- Difference between system call and library call
- Errno,perror
- Strace
- Stdin, stdout, stderror
- Pipes
    - Related process (Parent and child)
    - Unidirectional
    - pipe -> two file descriptors


## DAY 5
- FIFO's aka named pipes
    - Unrelated prcesses
- Zombie process
    - if child extis/dies before parent
- Orphan process
    - if parent exits/dies before child
