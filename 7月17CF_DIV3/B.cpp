#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;scanf("%d",&T);
    while(T--){
        int n,k;scanf("%d%d",&n,&k);
        int cnt=0;
        int tmp = 0;
        for(int i=0;i<n;i++){

            int ai;
            scanf("%d",&ai);
            if(ai==0) tmp++;
            else{
                cnt += (tmp+1)/(k+1);
                tmp = 0;
            }
            
        }
        cnt += (tmp+1)/(k+1);
        printf("%d\n",cnt);
    }
}