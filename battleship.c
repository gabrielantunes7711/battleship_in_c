#include <stdio.h>

int main() {
  // Cria o tabuleiro
  int board[10][10];
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      board[i][j] = 0;
    }
  }

  //Posiciona os barcos
  for (int i = 0; i < 3; i++) {
    board[i + 2][1] = 3;
  }

  for (int i = 0; i < 3; i++) {
    board[6][i + 4] = 3;
  }

  //Exibe o tabuleiro
  char row = 'A';
  printf("  ");
  for (int i = 1; i <= 10; i++)
  {
    printf("%c ", row);
    row++;
  }
  printf("\n");

  for (int i = 0; i < 10; i++) {
    printf("%d ", i);

    for (int j = 0; j < 10; j++) {
      printf("%d ", board[i][j]);
    }

    printf("\n");
  }

  return 0;
}