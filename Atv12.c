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

LeMensg("informe os numeros do vetor\n");
	for(i=0;i<*tam;i++){
		LeInteiro(&vet[i]);}

}

void ValoresMaxMin(int vet[],int *max,int *mim, int n) {
int maior=0,i,menor=10000000;
	
for(i=0;i<n;i++){
	if(vet[i]>maior){
	   maior=vet[i];}
	if(vet[i]<menor){
		menor=vet[i];}
}
*max=maior;
*mim=menor;
}	


int main(){
	
int vet[100];
int max,mim;
int n;

PrencherVetor(vet,&n);
ValoresMaxMin(vet,&max,&mim,n);	

printf("O VALOR MAXIMO EH: %d\nO VALOR MINIMO EH:%d\n",max,mim);	
	
return 0;
}

