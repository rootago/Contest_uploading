#include <bits/stdc++.h>
using namespace std;
int T;
int n,m;
int main(){
    scanf("%d",&T);
    while(T--){
        int n,m;
        scanf("%d%d",&n,&m);
        if(m==1||n==1){
            printf("NO");
        }
        else if(m<=2&&n<=2){
            printf("NO");
        }
        else{
            printf("YES");
        }
        printf("\n");

    }

}