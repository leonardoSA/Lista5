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

char LeCaractere(){
char cara;	

scanf("%s",&cara);
return cara;
}

int LeInteiro(int *num){
    
scanf("%d",&*num);
return *num;    
}

float LeFloat(float *num){
     
scanf("%f",&*num);
return *num; 
}

void PrencherVetor(int vet[],int *tam){
int i;
	
LeMensg("digite o tamanho do vetor\n");
LeInteiro(&*tam);

for(i=0;i<*tam;i++){
	LeInteiro(&vet[i]);	
}
}

void MaisDigitado(int vet[],int n){
int maior=0,cont=0,i,j;

	
for(i=0;i<n;i++){
	if(vet[i]>maior){
		maior=vet[i];}
}
for(j=0;j<n;j++){
	if(vet[j]==maior){
		cont++;}
}
printf("O maior numero eh %d\nFoi digitado %d(X)",maior,cont);

}

int main(){

int v1[100];
int tam;

	
PrencherVetor(v1,&tam);
MaisDigitado(v1,tam);	
return 0;
}

