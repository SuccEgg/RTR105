#include <stdio.h>
#include <ctype.h>

int main() {
char letter1, letter2, letter3;
char order;

printf("Ievadi pirmo burtu: ");
 scanf("%c", &letter1);

printf("Ievadi otro burtu: ");
 scanf("%c", &letter2);

printf("Ievadi treso burtu: ");
 scanf("%c", &letter3);

printf("Spied 'A' ja gribi kartot alfabetiska seciba vai 'D' lai kartoti preteji: ");
scanf("%c", &order);

char letters [3]= {letter1, letter2, letter3};
char temp;

for (int i=0; i<3; i++){
 for (int j=i+1;j<3; j++){
  if (order == 'A' && tolower(letters[i])>tolower(letters[j])){
	temp=letters[i];
	letters[i]=letters[j];
	letters[j]=temp;
} 
else if (order == 'D' && tolower (letters[i])<tolower(letters[j])) {
	temp = letters[i];
	letters[i]=letters[j];
	letters[j]=temp;
	}
    }
}

printf("Burti sakartoti sada seciba: %c %c %c \n", letters[1], letters[2], letters[3]);

return 0;
}

