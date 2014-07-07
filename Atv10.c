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

int SomaDois(int *a,int *b){
	
*a=*a+*a;
*b=*b+*b;
return *a+*b;	

}	

int main(){
	
int a;
int b;

LeMensg("DIGITE DOIS NUMEROS\n");
LeInteiro(&a);	
LeInteiro(&b);	
printf("A SOMA DO DOBRO DOS NUMEROS EH %d\n",SomaDois(&a,&b));
	
return 0;}
