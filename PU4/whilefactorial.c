#include <stdio.h>
#include <limits.h>

int main()
{
 long long num, fact=1;
 char data_type[10];

printf("ievadiet dec skaitli: ");
scanf("%lld", &num);

printf("ievadiet datu tipu (char, int, long long): ");
scanf("%s", data_type);

if (num<0)
{
 printf("negativs nav definets. \n");
 return 0;
}

if (strcmp(data_type, "char") ==0)
{
if (num>CHAR_MAX)
	{
	   printf("%lld nav iespejams ar char datu tipu. \n,", num);
	   return 0;
	}



