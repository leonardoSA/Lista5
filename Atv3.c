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
//terminar essa função errada
void ordenaValores(int *a, int *b, int *c){
int aux;	
	
if((a>b) && (c>b)){
	aux=*b;
	*b=*c;
	*c=aux;}
else if((b>a)&&(a>c)){ 
	aux=*a;
	*a=*b;
	*b=aux;}
else if((b>a)&&(c>a)){ 
	aux=*a;
	*a=*b;
	*b=aux;
	aux=*b;
	*b=*c;
	*c=aux;}	
else if((c>a)&&(a>b)){ 
	aux=*a;
	*a=*c;
	*c=aux;
	aux=*b;
	*b=*c;
	*c=aux;}
else if((c>a)&&(b>a)){ 
	aux=*a;
	*a=*c;
	*c=aux;}


}

int main(){
	
int a,b,c;

LeMensg("DIGITE TRES NUMEROS\n");
a=LeInteiro();
b=LeInteiro();
c=LeInteiro();	
ordenaValores(&a,&b,&c);
printf("%d %d %d",a,b,c);

return 0;}
