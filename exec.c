#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

	char comando[100];
	printf("Ingresa un comando: \n");
	scanf("%s",comando);

	/*
		This system call, creates a brand new proccess, the first argument is the program that I want to execute, the second are the
		parameters to that program, and the third the enviorment variables.
	*/
	execl("./a.out",NULL,NULL);

/*
	int ret;
	char *envp[] = { NULL };
	char *argv[] = { "./test_args", "hello", "there", NULL };
  	ret = execve("./test_args", argv, envp);
 */

	return 0;
}