#include <bits/stdc++.h>
using namespace std;
//const int 
long long base,c0;
int mod;
long long qmi(long long m,long long k,int p){
    if(m==0&&k==0){
        return 1;
    }
    long long res = 1 % p,t=m;
    while(k){
        if(k&1) res = res * t %p;
        t = t * t % p;
        k >>= 1;
    }
    return res;
}
int main(){
    scanf("%lld%lld%d",&base,&c0,&mod);
    int q;scanf("%d",&q);
    while(q--){
        long long k;
        scanf("%lld",&k);
        long long res = 0;
        long long c = c0;
        for(int i=0;i<k;i++){
            long long tmp = qmi(base,c,mod);
  //          printf("%lld\n",tmp);
            res += (tmp%mod);
            c = tmp%mod;

            res %= mod;
        }
        printf("%lld\n",res);
    }
}