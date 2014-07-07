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

void MaiorEnderecoCont(int *x, int *y){
	
if(&x>&y)
	printf("O MAIOR ENDERECO CONTEM O NUMERO EH %d",*x);
else
	printf("O MAIOR ENDERECO CONTEM O NUMERO EH %d",*y);
}


int main(){
	
int n1,n2;

LeMensg("DIGITE UM NUMERO INTEIRO\n");	
LeInteiro(&n1);	
LeMensg("DIGITE UM NUMERO INTEIRO\n");	
LeInteiro(&n2);
MaiorEnderecoCont(&n1,&n2);
	
return 0;
}

