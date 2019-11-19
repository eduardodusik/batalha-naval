#include <stdio.h>
#include <stdlib.h>

struct jogador {
	char nome[50];
	int pecasVivas;
};

struct tabuleiro {
	char matrizTab[10][10];		
};

void verificaEspaco(){
}

void jogarHorizontal() {
	
}

void jogarVertical() {
	
}

void mostrarMatriz(char matriz[][10]) {
	int x, y;
	char eixoAlfabeto[3];
	printf("  A   B   C   D   E   F   G   H   I   J\n");
	for(x = 0; x < 10; x++){
		printf("%i", x +1 );
		for(y = 0; y < 10; y++){
			printf(" %c ", matriz[x][y]);
			if(y < 9)
				printf("|");
		}
		if(x < 9)
			printf("\n  --------------------------------------\n");
	}
}

void limparMatriz(char matriz[][10]) {
	int x, y;
	for(x = 0; x < 10; x++){
		for(y = 0; y < 10; y++){
			matriz[x][y] = 'w';
		}
	}
}

void limparConsole() {
	system("cls");
}

void jogar() {
}

int main() {
	int barcoSize = 4;
	char matrizTab1[10][10];	
	char matrizTab2[10][10];	

	
	struct jogador player1;
	struct jogador player2;
	
	printf("Digite o nome do jogador 1: ");
	scanf("%s", &player1.nome);
	player1.pecasVivas = 10;
	
	printf("Digite o nome do jogador 2: ");
	scanf("%s", &player2.nome);
	player2.pecasVivas = 10;
	
	limparMatriz(matrizTab1);
	limparMatriz(matrizTab2);

	mostrarMatriz(matrizTab1);
	
}
