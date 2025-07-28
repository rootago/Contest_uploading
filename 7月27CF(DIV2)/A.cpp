#include <bits/stdc++.h>
using namespace std;

int main(){

    int T;
    scanf("%d",&T);
    while(T--){
        int n,c;scanf("%d%d",&n,&c);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        /*for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }*/
        int i;
        for(i=0;i<n;i++){
            if(a[i] > c)
                break;
        }
//        printf("%d %d\n",i,a[i]);
//        i--;int cnt = n-i;
//      printf("%d\n",cnt);
        int cnt = 0;
        long long x = 1;
        i = n-1;
        while(i>=0){
            if(x*a[i] > c) 
            {
                cnt++;
            }
            else{
                x *=2;
            }
            i--;
        }
    
        printf("%d\n",cnt);
        
    }
}