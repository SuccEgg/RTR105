// Masīvi- _Secīgi_ atmiņā izvietotas datu vienības, pie kuru vērtībām tiek ar viena un tā paša vārda (vai identifikatora) palīdzību- a[0], a[1], a[2],...... 

//NB! masīva vārds- tā ir norāde
//NB! masīva adrese- ta ir pirmā elementa adrese
//NB! masīva pirmā elementa indekss ir 0

#include<stdio.h>

int main()
{
int i_array_1[10]; //int lielumu masīva deklarēšana
		  // (piesaukt drīkst, bet vērtības nav zināmas)

int i_array_2[3]={1,2,3};// int lielumu masīva definēšana
int i_array_3[5]={4,5,6}; // masīva pēdējie divi elementi būs ar 0 vērtībām
int i_array_with_zeros[5]={0}; // masīva vērtības ir 0
// dinamisko masīvu veidošana

int i_array_2d[2][3]={{7,8,9},{10,11,12}};// [2- rindu skaits] [3-kolonu skaits] // dimensijas var būt vairākas

printf("masīva i_array_2 adrese: %p\n", i_array_2);


return 0;
}



