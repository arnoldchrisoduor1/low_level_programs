#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int i;
	int sum = 0;
	if(argc > 1){
		for (i = 1;i < argc;i++){
			sum += atoi(argv[i]);
		}
		printf("\n The sum is:%d",sum);
	}
return 0;
}

