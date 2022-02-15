#include <stdio.h>
#include <stdlib.h>

int main()
{
  int data[100], cari, i, n;

  printf("Mau berapa data yang ingin disimpan? ");
  scanf("%d", &n);

  printf("Input %d data integer\n", n);

  for (i = 0; i < n; i++){
    scanf("%d", &data[i]);
  }

  printf("Data yang ingin dicari? ");
  scanf("%d", &cari);

  for (i = 0; i < n; i++) {
    if (data[i] == cari) {
      printf("%d ada dan tersimpan di %d.\n", cari, i+1);
      break;
    }
  }
  if (i == n){
    printf("angka %d tidak ketemu\n", cari);
  }

  return 0;
}
