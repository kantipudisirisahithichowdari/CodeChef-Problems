#include <stdio.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int l1=INT_MIN,l2=INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i]>l1){
            l2=l1;
            l1=a[i];
                
            } else if(a[i]>l2 &&a[i]!=l1)
               l2=a[i];
        }
        // Your code goes here
        printf("%d\n",l1+l2);
    }

    return 0;
}
