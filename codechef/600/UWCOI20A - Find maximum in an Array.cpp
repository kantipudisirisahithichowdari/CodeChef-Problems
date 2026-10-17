#include <stdio.h>

int main() {
	// your code goes here
  int t;
  scanf("%d",&t);
  while(t--){
      int n;
      scanf("%d",&n);
      int a[n];
      for(int i=0;i<n;i++){
          scanf("%d",&a[i]);
      }
      int l=0;
      for(int i=0;i<n;i++){
          if(a[i]>l)
          l=a[i];
      }
      printf("%d\n",l);
  }
}

