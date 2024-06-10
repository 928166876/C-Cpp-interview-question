#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void){

    fork() || fork();
    
    printf("hello world\n");

    return 0;
}


/*
解释：
第一个fork（）会创建两个进程，一个是本身的父进程，一个是子进程，这个子进程会再次调用fork（）创建一个子进程，所以最终会有三个进程，每个进程都会打印一次“hello world”。
注意 “||” 运算符，父进程的返回值大于0 直接向下执行打印hello world，
子进程的返回值等于0，所以会再次调用fork（）创建一个子进程，
这子进程和子进程的子进程不管返回值怎样都会向下执行，所以会打印两条hello world。
*/
