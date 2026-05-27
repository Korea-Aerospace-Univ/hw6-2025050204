#include <stdio.h>

int main(void){
  int x[20]={}, y[20]={}, z[20]={};
  int N;

  scanf("%d", &N);

  for(int i=0; i < N; i++){
    scanf(" %d", &x[i]);
  }
  for(int j = 0; j < N; j++){
    scanf(" %d", &y[j]);
  }

  for(int k=0; k<N; k++){
    z[k] = x[k] + y[N-1-k];
    printf(" %d", z[k]);
  }
  return 0;
}
