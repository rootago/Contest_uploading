#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+20;
int p[N];
int s[N];
int gcd(int a,int b){
    return b?gcd(b,a%b):a;
}
int main(){
    int T;scanf("%d",&T);while(T--){
        int n;scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&p[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&s[i]);
        }
        if(p[n-1]!=s[0]){
            printf("NO\n");
            continue;
        }


        bool escape = false;
        for(int i=0;i<n-1;i++){
            if(p[i]%p[i+1]!=0){
                printf("NO\n");
                escape = true;
                break;
            }
        }
        if(escape) continue;

        escape = false;
        for(int i=n-1;i>0;i--){
            if(s[i]%s[i-1]!=0){
                printf("NO\n");
                escape = true;
                break;
            }
        }
        if(escape) continue;

        escape = false;
      //  printf("ok\n");
        int min_gcd = p[n-1];
        for(int i=0;i<n-1;i++){
            if(__gcd(p[i],s[i+1])!=min_gcd){
                printf("NO\n");
                escape = true;
                break;
            }
        }
        if(escape) continue;

        printf("YES\n");
    }
}