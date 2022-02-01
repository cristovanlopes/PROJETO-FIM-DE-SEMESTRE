#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
int main(){
setlocale(LC_ALL, "Portuguese");

/* Disciplina: Introdução a Programação
Professor: Paulo Cesar Melo
Alunos(a): Maria Eduarda de Souza, Cristovan Lopes Araujo dos Santos
Curso: Sistemas de Informação

O projeto tem como objetivo desafiar as pessoas a guardarem dinheiro de forma gradual durante um período de 52 semanas. 
*/

float Saldo, Guardar, Guardarfinal, soma;
int semana = 1, modo;
char Objetivo[61];
Saldo = 0.00;
Guardar = 0.00;
Guardarfinal = 0.00;
soma = 0.00;


printf("52 SEMANAS v1.3\n");
printf("\n\n");

printf("Criar novo objetivo\n");
printf("Qual é o seu objetivo? ex: viagem Japão\n");
scanf("%s", Objetivo);
printf("Quanto você deseja guardar por semana?\n");

printf("$ 1,00 é um bom começo\n");
scanf("%f", &Guardar);


printf("\t1 - Constante\n");
printf("\t\tO valor escolhido será fixo ao longo da semana.\n");
printf("\t2 - Progressivo\n ");
printf("\t\tNo progressivo o valor escolhido aumentará toda semana.\n");

scanf("%d", &modo);

if(modo == 1 ){
    semana=1;
    do{


         Guardarfinal = Guardar + Guardarfinal;
         Saldo=Guardarfinal;
         printf("Semana %d ", semana);  //modo constante
         printf("Guardar %.2f\n", Guardar);
         printf("\n");
         semana++;
    }
    while(semana < 53);
}else if(modo == 2){
    semana=1;
        do{
         Guardarfinal = Guardar + Guardarfinal;

            Saldo = Saldo + Guardarfinal;
            printf("Semana %d\n", semana);
            printf("Guardar %.2f\n", Guardarfinal); //progressivo
            printf("\n"); 
            semana++;
        }while(semana < 53);
}
printf("Ao final das 52 semanas seu saldo para o objetivo [ %s ] será de: R$%.2f", Objetivo, Saldo);


return 0;
}
