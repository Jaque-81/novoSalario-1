#include <stdio.h>

main(){
char plano;
float salario;
printf ("Digite o salário atual:");
scanf("%f",&salario);
printf ("Digite o plano (A,B,C):");
scanf(" %c",&plano);
switch (plano){
 case 'A':
printf ("Novo salário = %f",salario+salario*10/100);
break;
case 'B':
printf ("Novo salário = %f",salario+salario*15/100);
break;
case 'C':
printf ("Novo salário = %f",salario+salario*20/100);
break;
 default: printf("Plano inexistente!!!!");
 }
}