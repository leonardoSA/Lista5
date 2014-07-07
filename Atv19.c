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

void prechVetor(int vet[]){
int i;
	
for(i=0;i<5;i++){
	LeInteiro(&vet[i]);	
}
}

void ExibeVetor(int vet[]){
int i;

for(i=0;i<5;i++){
	printf("%d\n",(vet[i]+vet[i]));	
}		
}

int main(){

int v1[6];

prechVetor(v1);	
ExibeVetor(v1);

return 0;
}

