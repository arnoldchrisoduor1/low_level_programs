#include <stdio.h>
#include "header_file.h"
/*
 * Changing lowercase to uppercase
 *
 */

int main(void){

	char a[] = "look\n";

	char *str;

	printf("Lower: %s",a);

	str = to_upper(a);

	printf("Upper: %s",str);

	return 0;
}
