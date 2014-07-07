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

void VetorPonteir(int vet[],int num){
int cont=1;
	
while((*vet)&&(cont<=10)){
 *vet=num;
 cont++;
 vet++;	
}	
}

void ImpVetor(int vet[]){
int i;
	
for(i=0;i<9;i++){	
   printf("%d\n",vet[i]);}	
	
}

int main(){
	
int num;
int vet[10];

LeMensg("DIGITE UM NUMERO\n");
LeInteiro(&num);
VetorPonteir(vet,num);
ImpVetor(vet);	

return 0;}
