#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a, int b){
    return a>b?a:b;
}
int main() 
{

    int n;
    scanf("%d", &n);
  	for(int i =1; i <2*n; i++){
          for(int j = 1; j<2*n; j++ ){
            printf("%d ", max(abs(n-i)+1, abs(n-j)+1));
          }
          printf("\n");
      }
    return 0;
}