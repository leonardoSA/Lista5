#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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

int raizes(float a, float b, float c, float *x1,float *x2){

float delta;	

delta=(b*b)-4*a*c;
	
	if(delta>0){
		*x1=(-b+sqrt(delta))/(2*a);
		*x2=(-b-sqrt(delta))/(2*a);
		return 2;}
	if(delta==0){
		*x1=(-b+sqrt(delta))/(2*a);
		return 1;}
return 0;
}

void imprimiRaiz(int x){
	
if(x==2)
	printf("DELTA E MAIOR QUE 0(ZERO) EXISTEM DUAS RAIZES REAIS !\n");	 
else if(x==1)
	printf("DELTA E IGUAL A 0(ZERO) EXISTE UMA RAIZ REAL !\n");	 
else
	printf("DELTA E MENOR QUE 0(ZERO) NAO EXISTEM RAIZES REAIS !\n");

}
 
int main(){
	 
float a,b,c,x1,x2;
int qtdRaiz;
LeMensg("DIGITE O VALOR DE A\n");
a=LeFloat();	 
LeMensg("DIGITE O VALOR DE B\n");
b=LeFloat();
LeMensg("DIGITE O VALOR DE C\n");	 
c=LeFloat();
qtdRaiz=raizes(a,b,c,&x1,&x2);
imprimiRaiz(qtdRaiz);

return 0;
}



