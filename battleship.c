#include <stdio.h>

#define BOARD_COLUMNS 10
#define BOARD_ROWS 10

int main() {
  // Cria o tabuleiro
  int board[BOARD_ROWS][BOARD_COLUMNS];
  for (int i = 0; i < BOARD_ROWS; i++) {
    for (int j = 0; j < BOARD_COLUMNS; j++) {
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

  for (int i = 0; i < 3; i++) {
    board[7 + i][7 + i] = 3;
  }

  for (int i = 0; i < 3; i++) {
    board[1 + i][8 - i] = 3;
  }

  //Exibe o tabuleiro
  char row = 'A';
  printf("  ");
  for (int i = 1; i <= BOARD_COLUMNS; i++)
  {
    printf("%c ", row);
    row++;
  }
  printf("\n");

  for (int i = 0; i < BOARD_ROWS; i++) {
    printf("%d ", i);

    for (int j = 0; j < BOARD_COLUMNS; j++) {
      printf("%d ", board[i][j]);
    }

    printf("\n");
  }

  return 0;
}