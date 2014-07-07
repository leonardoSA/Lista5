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

void LeNotas(float *a, float *b){
	
scanf("%f",&*a);
scanf("%f",&*b);	
	
}

void CalcMedia(float a,float b, float *media, float *medPond){
	
*media=((a+b)/2);
*medPond=((a+(b*2))/3);

}

void exibeDados(float a, float b, float media, float medPond){
	
LeMensg("AS NOTAS DIGITADAS FORAM\n");
printf("%.2f\n",a);	
printf("%.2f\n",b);
LeMensg("A MEDIA DAS NOTAS EH: ");
printf("%.2f\n",media);
LeMensg("A MEDIA PONDERADA DAS NOTAS EH: ");
printf("%.2f",medPond);

}

int main(){
	
float a,b,media,medPond;	

LeMensg("DIGITE DUAS NOTAS\n");	
LeNotas(&a,&b);	
CalcMedia(a,b,&media,&medPond);
exibeDados(a,b,media,medPond);


return 0;
}

