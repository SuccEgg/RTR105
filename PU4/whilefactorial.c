#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <inttypes.h>
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
while (num > 0)
{
 if (fact>CHAR_MAX)
  { 
	printf("kluda aprekinot skaitli ar char datu tipu.\n");
  }

fact *= num;
num--;
}

printf("%lld faktiorialis ir %lld.\n", num, fact);
return 0;
} 

if (strcmp(data_type, "int")==0)
{
if  (num>INT_MAX)
{
 printf("skaitla %lld faktorials nav iespejams ar int datu tipu. \n", num);
 return 0;
}

while (num>0)
{
 if (fact>INT_MAX)
{
 printf("radas kluda aprekinot faktoriali ar int datu tipu. \n");
 return 0;
}
fact *= num;
num--;
}

printf("%lld faktorialis ir %lld. \n", num, fact);
return 0;
}

if (strcmp(data_type, "long long")==0)
{
 if (num>LLONG_MAX)
{
 printf(" %lld faktorialis nav iespejams ar long long datu tipu. \n");
return 0;
}

while (num>0)
{
if (fact>LLONG_MAX)
{
 printf(" radas kluda aprekinot faktoriali ar long long datu tipu. \n");
return 0;
}
fact *=num;
num--;
}
printf("%lld faktorialis ir %lld. \n", num, fact);
return 0;
}
printf("nederigs datu tips. \n");
return 0;
}


