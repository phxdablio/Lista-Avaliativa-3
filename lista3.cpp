#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Marca{
char nomemarca[50];
}; 


struct Fabricante{
struct Marca marca; 
char  site[100];
char telefone[15];
};

 struct Produto{
char descricao[50];
float peso;
float valorcompra;
float valorvenda;
float valorlucro = valorvenda-valorcompra;
struct Fabricante fabricante;

};

struct UF{
 char nomeuf[10]; 
 struct Produto produto; 


//produto[1]

//prototipação das funções le_valida


int main(){
int i=0;
int quantproduto,quantfabricante;
int opcao;
float valorcompra,valorvenda;
int fab;

//serão cadastrados no mínimo 2 fabricantes (máximo 5) 
//no mínimo 5 produtos (máximo 50)


printf("======CADASTRO DOS PRODUTOS=====\n");
printf("Digite a quantidade produtos que voce vai cadastrar: ");
scanf("%d",&quantproduto);
 struct Produto produto[quantproduto];


//laço de repetição para o cadastro dos produtos

for(i=1;i<=quantproduto;i++){
printf("Digite a descricao do produto: ");
scanf("%s",&produto[i].descricao);

printf("Digite o peso do produto:");
scanf("%f",&produto[i].peso);


printf("Digite o valor de compra do produto:");
scanf("%f",&produto[i].valorcompra);


printf("Digite o valor de venda do produto: ");
scanf("%f",&produto[i].valorvenda);
getchar();
printf("O valor do lucro do produto %d eh: %2.f",i+1,valorcompra-valorvenda);
getchar();
printf("O valor do lucro do  percentual de lucro do produto %d eh: %2.f\n",i+1,0);

printf("Qual eh o seu fabricante: ");
scanf("%d",&fab);
/*switch(fab){
	case 1: 
	fabricante[1].nomemarca = 1;
	break;
	case 2: 
	fabricante[2].nomemarca = 2; 
	break;
	case 3: 
	fabricante[3].nomemarca = 3; 
	break;
}
} */

//produto[1].fabricante

//chama le_valida_peso
//chama le_valida_valorcompra
//chama le_valida_valorvenda





printf("======CADASTRO DOS FABRICANTES=====\n");
printf("Digite a quantidade de fabricantes que voce vai cadastrar:"); 
scanf("%d",&quantfabricante);

struct Fabricante fabricante[quantfabricante];
struct UF uf[quantfabricante];
struct Marca marca[quantfabricante];
i=0;
for(i=1;i<=quantfabricante;i++){
printf("Digite o nome da marca do fabricante:");
scanf("%s",&marca[i].nomemarca);

printf("Digite o site do fabricante:");
scanf("%s",&fabricante[i].site);

printf("Digite telefone do fabricante:");
scanf("%s",&fabricante[i].telefone);

}

//cadastro das UFs

i=0;
for(i=1;i<=quantfabricante;i++){
 printf("Digite a UF do fabricante %d:", i +1);
scanf("%s",uf[i].nomeuf);
}


//chama le_valida_site 
//chama le_valida_telefone 
//chama le_valida_uf


printf("======MENU DOS RELATÓRIOS======\n");


printf("Escolha uma opcao: ");
scanf("%d",&opcao);
printf("[1] Listar todas as marcas\n");
printf("[2] Listar todos os produtos\n");
printf("[3] Listar os produtos de um determinado estado\n");
printf("[4] Listar os produtos de uma determinada marca\n");
printf("[5] Apresentar o(s) estado(s) onde esta o produto mais caro:\n");
printf("[6] Apresentar o(s)  fabricante(s)  onde esta registrado o produto mais barato:\n");
printf("[7] Listar todos os produtos em ordem crescente de valor\n");
printf("[8] Listar todos os produtos em ordem crescente de  maior “valor de lucro:\n");
printf("[9] Listar todos os produtos em ordem crescente de maior “valor percentual de lucro\n");
printf("[0] Sair do programa\n");

//switch case para apresentar os relatórios(tabelas)


switch(opcao){
     case 1: 
("=========RELATÓRIO 1=======\n");
for(i=1;i<=quantfabricante;i++){
	printf("%s\n",marca[i].nomemarca);
}
break;
     case 2: 
    ("=========RELATÓRIO 2=======\n");
for(i=1;i<=quantproduto;i++){
printf("%s\n",produto[i].descricao);
}
break;

}

return 0; 
} 
//define as funções le_valida 


