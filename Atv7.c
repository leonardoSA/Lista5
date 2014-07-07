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

int Retornafrac(float num, int *inteiro, float *frac){
	
*inteiro=num;
*frac=num-*inteiro;
printf("numero %f\nparte inteira %d\nparte fracionaria %f",num,*inteiro,*frac);	

return 0;
}	

int main(){
	
int num;
float numFra,frac;
	

LeMensg("DIGITE UM NUMERO FRACIONARIO\n");
LeFloat(&numFra);		
Retornafrac(numFra,&num,&frac);
	
return 0;
}

