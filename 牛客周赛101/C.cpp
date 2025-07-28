#include <bits/stdc++.h>
using namespace std;

long long n;

int main(){
    scanf("%lld",&n);
    int cnt = 0;
    while(n!=0){
        cnt ++;
        n /= 2;
    }
    long long res = 0;
    long long exp = 1;
    for(int i=0;i<cnt;i++){
        res += exp;
        exp *= 2;
    }
    printf("%lld\n",res);
 //   printf("%llx\n",res);
}