#include <stdio.h>
#define n 10

//int selectionSort (int v[n], i_menor );

int main(void) {

  int v[n] = {4,9,0,7,12,-6,56,99,-12,86};
  int i_menor = 0;

  for(int i = 0; i < n; i++) {
    if(v[i] < v[i_menor]) {
      i_menor = i;
    }
  }
  printf("Menor valor do array: %d\n",v[i_menor]);
  printf("Posição do array: %d",i_menor);

  //printf("%d\n",selectionSort(v[n],i_menor));
  for(int i = 0; i < n-1; j++) {
    for(int j = i+1; i < n, j++) {
      if(v[j] < v[i_menor]) {
        i_menor = j;
      }
    }
  }
      int aux = v[i];
    v[i] = v[i_menor];
    v[i_menor] = aux;


  return 0;
}
/*
int selectionSort (int v[n], i_menor){

  for(int i = 0; i < n-1; j++) {
    for(int j = i+1; i < n, j++) {
      if(v[j] < v[i_menor]) {
        i_menor = j;
    }
  int aux = v[i];
  v[i] = v[i_menor];
  v[i_menor] = aux;
  }
*/
}