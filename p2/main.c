#include <stdio.h>

int main(void){
  int x[20], y[20], z[20];
  int N;

  scanf("%d", &N);
  
  for(int *p = x; p < x + N; p++){
    scanf(" %d", p); // 포인터를 사용하여 x에 수 입력, 밑의 y도 마찬가지
  }
  for(int *q = y; q < y + N; q++){
    scanf(" %d", q);
  }

  for(int *r = y; r < y+N; r++){ //r과 i를 이용하여 y에 들어간 수들을 역방향으로 설정하여 z 배열에 다시 집어넣기
    int i = r-y;
    *(z+i) = *(y+N-1-i);
  }

  for(int i =0; i < N; i++){
    printf(" %d", *(x+i) + *(z+i)); //x정방향과 y역방향 수들을 더한 값을 출력
  }
  return 0;
}
