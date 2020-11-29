/*
 *   Código desenvolvido por Luan Vilela     26/11/2020
 *   https://github.com/luan-vilela  /Exemplos-c-digos-C
 *   License MIT - Free Software
 *   
 *   Editado por Francisco Gomes	     29/11/2020
 *   https://github.com/franciscogomes2020/Exemplos-codigos-C
 *   License MIT - Free Software
 *
 * Esse código Recebe um N inteiro e desenha N triângulos na mesma linha 
 * 
 *       EXEMPLO DE FUNCIONAMENTO:
 *       Digite N: 6
 *
 *       *       *       *       *       *       *
 *       **      **      **      **      **      **
 *       ***     ***     ***     ***     ***     ***
 *       ****    ****    ****    ****    ****    ****
 *       *****   *****   *****   *****   *****   *****
*/

#include <stdio.h>
#define ESPASSAMENTO '\t'

void characters(char c,int quantidade){
	while(quantidade--)
		printf("%c",c);
}
void linha(int asteriscos,int espacos,int tables){
	while (tables--){
		characters('*',asteriscos);
		characters(' ',espacos);
		characters(ESPASSAMENTO,1);
	}
	characters('\n',1);
}

void desenharTorre(int base, int torres){
    for(int asteristicos = 1; asteristicos <= base; asteristicos++)
	    linha(asteristicos,base-asteristicos,torres);
}

int main(){
    int base;
    int torres;

    printf("\n Quantidade de asteriscos na base de cada torre=");
    scanf("%d", &base);

    printf(" Quantidade de torres=");
    scanf("%d", &torres);

    printf("\n");
	
    if(base<0||torres<0)
	    printf("voce nao pode colocar valores negativos\n");
    else
	    desenharTorre(base,torres);

    return 0;
}
