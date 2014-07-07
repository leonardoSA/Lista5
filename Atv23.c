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

void ImpVetorPonteir(int vet[]){
int cont=1;
	
while((*vet)&&(cont<=10)){
 printf("%d ",*vet);
 cont++;
 vet++;	
}	
}

void prechVetor(int vet[]){
int i;
	
for(i=0;i<=9;i++){
	LeInteiro(&vet[i]);	
}
}

int main(){

int vet[10];

LeMensg("DIGITE OS ELEMENTOS DO VETOR\n");
prechVetor(vet);	
ImpVetorPonteir(vet);
	
return 0;
}

