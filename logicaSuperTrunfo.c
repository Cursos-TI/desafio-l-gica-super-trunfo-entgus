#include <stdio.h>


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
 char nome[50];
 int codigo;
 int populacao;
 int area;
 int pib; 
 int pontoturistico;  

printf("cidade: \n", nome);
scanf(" %s", &nome);

printf(" codigo: \n", codigo);
scanf(" %d", &codigo);


printf("populaçao: \n", populacao);
scanf(" %d", &populacao);

printf("area: \n", area);
scanf(" %d", &area);

printf("pib: \n ", pib);
scanf(" %d", &pib);

printf("ponto turistico:\n",  pontoturistico);
scanf(" %d", &pontoturistico);

  char nome2 [50];
 int codigo2;
 int populacao2;
 int area2;
  long long int  pib2; 
 int pontoturistico2;

printf("cidade: \n", nome2);
scanf(" %s", &nome2);

printf(" codigo: \n", codigo2);
scanf(" %d", &codigo2);


printf("populaçao: \n", populacao2);
scanf(" %d", &populacao2);

printf("area: \n", area2);
scanf(" %d", &area2);

printf("pib: \n ", pib2);
scanf(" %lld", &pib2);

printf("ponto turistico:\n",  pontoturistico2);
scanf(" %d", &pontoturistico2);

double densidadepopulacional =(double) populacao  / area;
double pibpercapita =( double ) pib / populacao;

double densidadepopulacional2 =(double) populacao2  / area2;
double pibpercapita2 =( double ) pib2 / populacao2;

;printf("cidade: %s\n", nome);
printf(" codigo: %d\n", codigo);
printf("populaçao: %d\n", populacao);
printf("area: %d\n", area);
printf("pib: %lld\n ", pib);
printf("ponto turistico: %d\n",  pontoturistico);
printf("densidade populacional:%.2f\n", densidadepopulacional);
printf("pib per capita:%.2f\n\n", pibpercapita);


printf("cidade: %s\n", nome2);
printf(" codigo: %d\n", codigo2);
printf("populaçao: %d\n", populacao2);
printf("area: %d\n", area2);
printf("pib: %lld\n ", pib2);
printf("ponto turistico: %d\n",  pontoturistico2);
printf("densidade populacional:%.2f\n", densidadepopulacional2);
printf("pib per capita:%.2f\n\n", pibpercapita2);


int resultado1 = 0;
int resultado2 = 0;

if( populacao > populacao2){
    resultado1 += 1; 
printf("%s populaçao +1\n", nome); 
 ; 
}else{
    printf("%s populaçao +1\n",nome2);
     resultado2 += 1;
}
if( area > area2){
printf("%s area +1\n", nome);
 resultado1 += 1; 
}else{
    printf("%s area +1\n",nome2);
      resultado2 += 1;
}

if( pib > pib2){
printf("%s pib +1\n", nome);
resultado1 += 1; 
}else{
    printf("%s pib +1\n",nome2);
      resultado2 += 1;
}

if( pontoturistico > pontoturistico2){
printf("%s pontos turisticos +1\n", nome);
resultado1 += 1; ;
}else{
    printf("%s pontos turisticos +1\n",nome2);
      resultado2 += 1;
}

if( densidadepopulacional > densidadepopulacional2){
printf("%s densidade populacional +1\n", nome);
resultado1 += 1;  
}else{
    printf("%s densidade populacional +1\n",nome2);
    resultado2 += 1;
}

if( pibpercapita > pibpercapita2){
printf("%s pib per capita +1\n\n", nome);
 resultado1 += 1; 
}else{
    printf("%s pib per capita +1\n\n",nome2);
      resultado2 += 1;
}




if( resultado1 > resultado2 ){
printf("GANHADOR: %s +%d\n %s +%d\n", nome, resultado1, nome2, resultado2);
} if (resultado1 < resultado2) {
    printf(" GANHADOR: %s +%d\n %s +%d \n", nome2, resultado2, nome, resultado1);
} if (resultado1 == resultado2){
    printf(" EMPATE\n %s +%d\n %s +%d \n", nome, resultado1, nome2, resultado2);
} 




}