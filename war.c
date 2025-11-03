 /*Desafio nivel novato estruturas de dados
   Desafio nivel novato atividade pratica*/
         
// Bibliotecas ultilizadas 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  

    
                     // Inciar declarando struct como nome territorio fora da funçao principal 
                        struct Territorio 
                     {
                        char Nome[30];  // Para armazenar dados com nomes do territorio !

                        char Cor[15];   // Para armazenar dados com a cor !

                        int Tropas;     // para armazenar dados sobre o numeros de tropas !
                     };



 int main(){ // funnçao principal 


                   
                   int i;                                             // Interio "I" para usar para repetiçao for
                   struct Territorio territorios[5];                  // struct com vetor para repetiçao 
                   
                   printf("***** INCIO DO CADASTRO DE TERRITORIOS *****\n");            

                   for ( i = 0; i < 5; i++)                                  // For com repetiçao ate 5 
                   {
                     printf("\n ==== Cadastros do territorio %d ====\n", i+1);
                     printf("---------------------------------------\n");
                     printf("Adicione o territorio: (ex Africa, America)\n");
                     scanf("%s", territorios[i].Nome);
                     printf("Adicione a cor para o exercito\n");
                     scanf("%s", territorios[i].Cor);
                     printf("Adicione a quantidade de tropas\n");
                     scanf("%d", &territorios[i].Tropas);

                     printf(">>>>_ TERRITORIO %d CADASTRADO COM SUCESSO ! _<<<<<\n", i+1);
                  
                  }
                   printf("\n=========== TERRITORIOS CADASTRADOS =============\n");  // Dados armazenados 
                   
                   for ( i = 0; i < 5; i++)                                          // Saida dos dados armazenados 
                   {
                     printf("Territorio > %d\n", i+1);
                     printf("Nome > %s\n", territorios[i].Nome);
                     printf("Cor > %s\n", territorios[i].Cor);
                     printf("Tropas > %ls\n", &territorios[i].Tropas);
                     printf("---------------------------------------------\n");
                   }
                   
                 




                  return 0;    
               }   // Carlos Daniel 02/11/2025   
                     