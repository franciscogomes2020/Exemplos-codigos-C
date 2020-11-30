/*
 *   Código desenvolvido por Luan Vilela     26/11/2020
 *   https://github.com/luan-vilela/Exemplos-c-digos-C
 *   License MIT - Free Software
 *   
 *   Editado por Francisco Gomes	     29/11/2020
 *   https://github.com/franciscogomes2020/Exemplos-codigos-C
 *   License MIT - Free Software
 *
 *   Esse código Recebe 3 parametros e desenha triangulos na tela 
 * 
 *       EXEMPLO DE FUNCIONAMENTO:
 *
 *	   
 *	   Quantidade de characteres na base de cada torre=10
 *	   Quantidade de torres=3
 *	   characteres da torre=*
 *	
 *	 *               *               *
 *	 **              **              **
 *	 ***             ***             ***
 *	 ****            ****            ****
 *	 *****           *****           *****
 *	 ******          ******          ******
 *	 *******         *******         *******
 *	 ********        ********        ********
 *	 *********       *********       *********
 *	 **********      **********      **********
 *	 
*/

#include <stdio.h>

void printarCharacterMaisDeUmaVez(char c,int quantidade){
	while(quantidade--)
		printf("%c",c);
}

void printarLinha(char character, int quantidade,int espacos,int tables){
	while (tables--){
		printarCharacterMaisDeUmaVez(character,quantidade);
		printarCharacterMaisDeUmaVez(' ',espacos);
		printf("%c",'\t');
	}
	printf("%c",'\n');
}

void desenharTorre(char character, int base, int torres){
    for(int linha = 1; linha <= base; linha++)
	printarLinha(character,linha, base-linha,torres);
}
void limparBufferDoTlecado(){
	char c;
	while((c=getchar())!='\n' && c!=EOF);
}
int main(){
    int base;
    int torres;
    char character;

    printf("\n Quantidade de characteres na base de cada torre=");
    scanf("%d", &base);
    limparBufferDoTlecado();

    printf(" Quantidade de torres=");
    scanf("%d", &torres);
    limparBufferDoTlecado();

    printf(" characteres da torre=");
    scanf("%c", &character);

    printf("\n");
	
    if(base<0||torres<0)
	    printf("voce nao pode colocar valores negativos\n");
    else
	    desenharTorre(character, base,torres);

    return 0;
}
