#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[50];
int b[50];
map<int,int> mp;
int main(){
    scanf("%d%d",&n,&m);
    
    int cnt_n = 0;
    int save_n = n;
    while(n!=0){
        a[cnt_n++] = n%2;
        n /= 2;
    }
    int save_m = m;
    int cnt_m = 0;
    while(m!=0){
        b[cnt_m++] = m%2;
        m /= 2;
    }

    if(cnt_n < cnt_m){
        printf("-1\n");
        return 0;
    }
    if(b[0]==0) 
    {
        printf("-1\n");
        return 0;
    }
    int simple_cnt = 0;

    int exp = 1;
    for(int i=0;i<cnt_m;i++){
        if(b[i]==1){
            mp[exp] = 9999; 
            simple_cnt++;
        }
        exp *=2;
    }
    for (auto it : mp){
        if(it.second==9999){
            printf("%d ",it.first);
        }
    }
    for(int i=1;i<=save_n;i++){
        if(mp[i]==0)
            printf("%d ",i);
    }
    printf("\n");
    printf("%d\n",simple_cnt);
    int j = 0;
    for(j=1;j<=simple_cnt;j++){
        printf("%d %d\n",j,j);
    }
    if(save_m!=1||save_n!=1)
        printf("%d %d\n",j,save_n);
}