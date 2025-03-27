#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fin = fopen(argv[1], "r");
  FILE *fout = fopen(argv[2], "w");

  int N, M, T, K;
  int z = 0;

  fscanf(fin, "%d%d%d%d", &T, &N, &M, &K);
  char m[N + 1][M + 1], a[N + 1][M + 1];
  if (fin == NULL) {
    printf("Eroare: Nu s-a putut deschide fișierul de intrare '%s'.\n",
           argv[1]);
    return 1;
  }
  int cp = K;
  int i, j;
  int VII, MORTI;
  int r, b;

  if (T == 1) {

    for (i = 0; i < N; i++) {
      for (j = 0; j < M; j++) {
        fscanf(fin, " %c", &m[i][j]);
        a[i][j] = m[i][j];
      }
    }
    for (r = 0; r < N; r++) {

      for (b = 0; b < M; b++) {
        fprintf(fout, "%c", a[r][b]);
      }

      fprintf(fout, "\n");
    }
    fprintf(fout, "\n");
    while (K > 0)

    {
      z++;
      if (K < cp)
        fprintf(fout, "\n");
      for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
          m[i][j] = a[i][j];
        }
      }


if (K != 1) {
    for (r = 0; r < N; r++) {

      for (b = 0; b < M; b++) {
        fprintf(fout, "%c", a[r][b]);
      }

      fprintf(fout, "\n");
    }
  } else {
    for (r = 0; r < N - 1; r++) {

      for (b = 0; b < M; b++) {
        fprintf(fout, "%c", a[r][b]);
      }

      fprintf(fout, "\n");
    }
    r = N - 1;

    for (b = 0; b < M; b++) {
      fprintf(fout, "%c", a[r][b]);
    }
  }

  K--;
}
}
fprintf(fout, "\n");
fprintf(fout, "\n");

fclose(fin);
fclose(fout);
}