// lietotāju funkcijas tiek pielietotas vairākkārtejai vienu un to pašu koda fragmentu pildīšanai (pašas koda rindiņas ir aprakstītas tikai vienu reizi)

#include<stdio.h>

//funkcijas_datu_tips funkcijas_vārds();- tā ir deklarēšana
//funkcijas_datu_tips funkcijas_vārds(){}- tā ir definēšana

void dialogs() //tāpat kā mainīgajiem, funkcijai ir datu tips funkcijas datu tips parasti saskaņots ar atgriežama (return) leluma (mainīgais vai izteiksme) datu tips, ja nav paredzēts, ka funkcija kaut ko atgieizīs- datu tips- void

{
char c_dialogs_local;

printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
scanf("%hhd",&c_dialogs_local);
printf("Ievadītais skaitlis (izvade no dialogs): %hhd\n",c_dialogs_local);
}

char dialogs_with_return() 
{
char c_dialogs_local;

printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
scanf("%hhd",&c_dialogs_local);
printf("Ievadītais skaitlis (izvade no dialogs_with_return): %hhd\n",c_dialogs_local);

return c_dialogs_local;
}

char dialogs_with_arguments(char c_dialogs_argument)

{
printf("\nIepirekšējais ievadītais skaitlis (izdruka no dialogs_with_arguments): %hhd\n", c_dialogs_argument);
printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
scanf("%hhd",&c_dialogs_argument);
printf("Ievadītais skaitlis (izvade no dialogs): %hhd\n",c_dialogs_argument);

}


int main()
{
//char c;
char c_main_local;

/*
printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
scanf("%hhd",&c);
printf("Ievadītais skaitlis: %hhd\n",c);
*/

dialogs();

{;;;;;;;} // kāds cits koda fragments

/*
printf("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
scanf("%hhd",&c);
printf("Ievadītais skaitlis: %hhd\n",c);
*/

dialogs();

c_main_local=dialogs_with_return();

printf("Ievadītais skaitlis (izdruka no main): %hhd\n", c_main_local);

c_main_local=dialogs_with_arguments(c_main_local);
printf("Ievadītais skaitlis (izdruka no main): %hhd\n", c_main_local);

return 0;

}
