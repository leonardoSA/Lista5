#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeMensg(char mensg[]){
    
    printf("%s",mensg);
}

char LeString(char stri[]){
     
    scanf("\n\r%[^\n]",stri);
    return *stri;    
}

char LeCaractere(char *cara){
	
scanf("%s",&*cara);
return *cara;
}

int LeInteiro(int *num){
    
scanf("%d",&*num);
return *num;    
}

float LeFloat(float *num){
     
scanf("%f",&*num);
return *num; 
}

void modificaNumeros(int *x, float *y, char *z){

LeMensg("DIGITE UM NUMERO INTEIRO\n");	
LeInteiro(&*x);	
LeMensg("DIGITE UM NUMERO REAL\n");
LeFloat(&*y);
LeMensg("DIGITE UM NUMERO CARACTERE\n");
LeCaractere(&*z);	
	
}

int main(){
int inteiro;
float real;
char caractere;

modificaNumeros(&inteiro,&real,&caractere);
printf("O NUMERO INTEIRO EH: %d\nO NUMERO REAL EH: %.2f\nO CARACTERE EH: %c\n",inteiro,real,caractere);
modificaNumeros(&inteiro,&real,&caractere);
printf("O NOVO NUMERO INTEIRO EH: %d\nO NOVO NUMERO REAL EH: %.2f\nO NOVO CARACTERE EH: %c",inteiro,real,caractere);
	
return 0;
}

