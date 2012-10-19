#include <stdio.h>
#include <limits.h>
#include <math.h>

int main(void){
  int n,i;
  long int sum=0;
  printf("Enter n:");
  scanf("%d", &n);
  for (i = 1; ((i <= n) && ((LONG_MAX-pow(i,2*(i)))>=sum)); i++) {
	sum=sum+pow(i,2*i);
	if (i%3==0)
	  printf("%20d\n", sum);
	else
	  printf("%20d ", sum);
  }
  fflush(stdin);
  getchar();
  return 0;
}
/*
int main(void){
  int n,i;
  unsigned long long sum=0;
  printf("Enter n:");
  scanf("%d", &n);
  for (i = 1; ((i <= n) && ((_UI64_MAX-pow(i,2*(i)))>=sum)); i++) {
	sum=sum+pow(i,2*i);
	if (i%3==0)
	  printf("%20lld\n", sum);
	else
	  printf("%20lld ", sum);
  }
  fflush(stdin);
  getchar();
  return 0;
}
*/

