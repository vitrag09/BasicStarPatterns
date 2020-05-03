#include<stdio.h>
int main(){
	int i,j,k,r;
	printf("how many rows u want:");
	scanf("%d",&r);
  printf("\n");
  for(i=1;i<2*r;i++){
    if(i<r+1){
      for(j=0;j<i;j++){
        printf("*");
      }
      printf("\n");
    }
    else{
      for(j=i-r;j<r;j++){
        printf("*");
      }
      printf("\n");
    }
  }
	return 0;
}
