#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Produto{
char descricao[50];
float peso;
float valorcompra;
float valorvenda;
valorlucro = 
float valorlucro;
percentlucro
float percentlucro;
struct Fabricante fabricante;
struct UF uf;
};

struct Marca{
char nomemarca[50];
struct Produto produto;


}; 

struct Fabricante{
struct Marca marca; 
char  site[100];
char telefone[15];
struct UF uf; 
struct Produto produto;
};



struct UF{
 char nomeuf[10]; 
struct Produto produto;
};


//prototipação das funções le_valida


int main(){
int i=0;
int quantproduto,quantfabricante;
Produto produto[quantproduto];
Fabricante fabricante[quantfabricante];
UF uf[quantfabricante];
Marca marca[quantfabricante];

//serão cadastrados no mínimo 2 fabricantes (máximo 5) 
//no mínimo 5 produtos (máximo 50)


printf("======CADASTRO DOS PRODUTOS=====\n");
printf("Digite a quantidade produtos que voce vai cadastrar: ");
scanf("%d",&quantproduto);


//laço de repetição para o cadastro dos produtos

for(i=0;i<=quantproduto;i++){
printf("Digite a descricao do produto: ");
scanf("%s",&produto[i].descricao);

printf("Digite o peso do produto:");
scanf("%f",&produto[i].peso);


printf("“Digite o valor de compra do produto: “");
scanf("%f",&produto[i].valorcompra);


printf("Digite o valor de venda do produto: ");
scanf("%f",&produto[i].valorvenda);


printf("O valor do lucro do produto %d eh: %2.f",i+1,produto[i].valorlucro);

printf("O valor do lucro do  percentual de lucro do produto %d eh: %2.f",i+1,produto[i].percentlucro);
}


//chama le_valida_peso
//chama le_valida_valorcompra
//chama le_valida_valorvenda





printf("======CADASTRO DOS FABRICANTES=====\n");
printf("Digite a quantidade de fabricantes que voce vai cadastrar:"); 
scanf("%d",&quantfabricante)


i=0;
for(i=0;i<=quantfabricante;i++){
printf("Digite o nome da marca do fabricante:");
scanf("%s",&fabricante[i].marca[i].nomemarca);

printf("Digite o site do fabricante:");
scanf("%s",&fabricante[i].site);

printf("Digite telefone do fabricante:");
scanf("%s",&fabricante[i].telefone);


}

//cadastro das UFs

i=0;
for(i=0;i<=quantfabricante;i++){
 printf("Digite a UF do fabricante %d:", i +1)
scanf("%s",uf[i].nomeuf);
}


//chama le_valida_site 
//chama le_valida_telefone 
//chama le_valida_uf


printf("======MENU DOS RELATÓRIOS======");


printf("Escolha uma opcao: ");
printf("[1] Listar todas as marcas");
printf("[2] Listar todos os produtos");
printf("[3] Listar os produtos de um determinado estado");
printf("[4] Listar os produtos de uma determinada marca");
printf("[5] Apresentar o(s) estado(s) onde esta o produto mais caro:");
printf("[6] Apresentar o(s)  fabricante(s)  onde esta registrado o produto mais barato:");
printf("[7] Listar todos os produtos em ordem crescente de valor");
printf("[8] Listar todos os produtos em ordem crescente de  maior “valor de lucro: ");
printf("[9] Listar todos os produtos em ordem crescente de maior “valor percentual de lucro");
printf("[0] Sair do programa");

//switch case para apresentar os relatórios(tabelas)




return 0; 
} 
//define as funções le_valida 

