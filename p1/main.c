#include <stdio.h>

int main(void){
  char x[10];
  char max='\0';
  int maxnum=0;

  for(int *p=x; p < x + 10; p++){
    scanf("%c", p);
  }

  for(char *p = x; p < x + 10; p++){
    int now =0;
    for(char *q = x; q < x + 10; q++){
      if (*p == *q) now++;
    }
    if(now > maxnum){
    maxnum = now;
    max = *p;
    }
  }

  
  printf("%c %d\n", max, maxnum);
  return 0;
}
