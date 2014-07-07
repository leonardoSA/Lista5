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

int LeInteiro(){
    int num;
     
    scanf("%d",&num);
return num;    
}

float LeFloat(){
    float num;
     
    scanf("%f",&num);
return num; 
}

void SomaNumeros(int *a, int *b){
	
*a=*a+*b;	
} 

int main(){
	
int a, b;

LeMensg("DIGITE DOIS NUMEROS\n");
a=LeInteiro();
b=LeInteiro();
SomaNumeros(&a,&b);
printf("OS VALORES SAO:\n%d\n%d",a,b);

return 0;
}
