#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* to_binary(char num) {

 char* binary = malloc(sizeof(char) * 9 );
 memset(binary, '\0', 9);
 int i=7;
 while (i >= 0) {
	binary[7 - i]=(num>>i)&1?'1':'0';
	i--;
 }
 return binary;
}

int main(void) {
 char num;
 printf( "ievadi dec skaitli:");
 scanf("%hhd", &num);

 char* binary = to_binary(num);
 printf("%s/n", binary);
 free(binary);
 return 0;
}
