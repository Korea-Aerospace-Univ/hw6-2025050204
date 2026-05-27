#include <stdio.h>

int main(){
  char x[10];
  char max='\0';
  int maxnum=0;

  for(int i=0; i < 10; i++){
    scanf("%c", &x[i]);
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
