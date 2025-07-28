#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+20;
pair<int,int> a[N];
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}
int main(){
    int T;scanf("%d",&T);
    while(T--){
        int n,k;
        scanf("%d%d",&n,&k);
        for (int i=0;i<n;i++){
            scanf("%d",&a[i].second);
            a[i].first = i+1;
        }
        sort(a,a+n,cmp);
        int j;
        for(int i=0;i<n;i++){
            if(a[i].first==k){
                j = i;
                break;
            }
        }
        int  m = 1;
        if(a[j].second == a[n-1].second){
            printf("YES\n");
            continue;
        }
       // printf("%d %d\n",a[j].second,m);
        for(int t=j+1;t<n;t++){
            if(a[t].second==a[j].second){
                continue;
            }
            if(a[t].second-a[j].second>a[j].second-m+1){
                printf("NO\n");
                break;
            }
            else{
                m += a[t].second-a[j].second;
                j = t;

            }
            
            if(a[j].second == a[n-1].second){
                    printf("YES\n");
                    break;
            }
        //  printf("%d %d\n",a[j].second,m);
        }
    }
}