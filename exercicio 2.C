#include <stdio.h>
#define tam 15

struct loja {
  char nomeLoja[15];
  int telefone;
  float preco;
};

int main() {
  struct loja Lojas[tam];
  int i;
  float media, soma = 0;
  for (i = 0; i < tam; i++) {
    scanf("%s", Lojas[i].nomeLoja);
    scanf("%d", &Lojas[i].telefone);
    scanf("%f", &Lojas[i].preco);
  }
  for (i = 0; i < tam; i++) {
    soma = soma + Lojas[i].preco;
  }
  media = soma / tam;
  printf("A média de preços são %f.\n", media);
  for (i = 0; i < tam; i++) {
    if (Lojas[i].preco < media)
      printf("%s - %d\n", Lojas[i].nomeLoja, Lojas[i].telefone);
  }
  return 0;
}
