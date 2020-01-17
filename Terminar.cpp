#include <stdio.h>
#define ALTURA 5
#define LARGURA 5
	void seleciona_elem (int [][LARGURA], int);
	void pontos (int [][LARGURA], int);
	void imprime_matriz (int [][LARGURA], int);
	void marca_triang (int [][LARGURA], int);
	void flip (int [][LARGURA], int);
	void espera_entrada(void);
/**** DEFINICAO DE FUNCOES ********/
/* funcao que preenche uma matriz nlin X LARGURA com pontos */
	void pontos( int matriz[][LARGURA], int nlin)
	{
		int x,y;
		for(y=0; y<nlin; y+=1)
		for(x=0; x<LARGURA; x+=1)
		matriz[y][x] = ’.’;
	}
/* funcao que preenche os elementos selecionados da matriz com um
* quadrado e imprime a matriz
*/
	void seleciona_elem(int matriz[][LARGURA], int nlin)
	{
		int x, y;
		87
		printf("\nEntre com as coordenadas na forma y,x (2,4).\n");
		printf("Use numeros negativos para terminar.\n");
		while (1)
		{
		printf("Coordenadas: ");
		scanf("%d,%d", &y, &x);
		if (x >= 0 && y >= 0)
			{
				matriz[y][x]=’\xB1’; /* preenche o elemento com quadrado */
				imprime_matriz(matriz, nlin); /* imprime a matriz */
			}
				else
	break;
		}
	}
/* funcao que marca todos os elementos abaixo da diagonal principal de
* um array nlin X LARGURA com quadrados
*/
void marca_triang(int matriz[][LARGURA], int nlin)
{
int x, y;
printf("Triangulo\n");
pontos(matriz, nlin);
for (y = 0; y < nlin; y+=1)
for (x = 0; x <= y; x+=1)
matriz[y][x] = ’\xB1’;
}
/* funcao que imprime um array 2-D nlin X LARGURA */
void imprime_matriz(int matriz[][LARGURA], int nlin)
{
int x,y;
for(y=0; y<nlin; y+=1)
{
for(x=0; x<LARGURA; x+=1)
printf("%c ", matriz[y][x] );
printf("\n\n");
}
printf("\n");
}
/* funcao que flipa um array ao longo da diagonal principal */
void flip(int matriz[][LARGURA], int nlin)
{
int x, y;
int temp;
88
printf("Flipado ao longo da diagonal principal.\n");
for (y = 0; y < nlin; y+=1)
for (x = 0; x <= y; x+=1){
temp = matriz[y][x];
matriz[y][x] = matriz[x][y];
matriz[x][y] = temp;
}
}
/* funcao que espera ate que uma tecla seja digitada */
void espera_entrada( void ) {
getchar(); }
/********** MAIN ************/
/* alguns exemplos de chamadas de funcoes com argumentos array 2-D */
int main()
{
int matriz [ALTURA] [LARGURA];
pontos(matriz, ALTURA);
seleciona_elem(matriz, ALTURA);
espera_entrada();
flip(matriz, ALTURA);
imprime_matriz(matriz,ALTURA);
espera_entrada();
marca_triang( matriz, ALTURA);
imprime_matriz( matriz, ALTURA);
espera_entrada();
flip( matriz, ALTURA);
imprime_matriz(matriz, ALTURA);
espera_entrada();
