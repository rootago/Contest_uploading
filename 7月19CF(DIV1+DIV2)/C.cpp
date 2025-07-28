#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
int T;
bool cmp(PII a,PII b){
    if(a.first==b.first)
}
int main(){
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        PII a[n];
        for(int i=0;i<n;i++){
            scanf("%d%d",&a[i].first,&a[i].second);
        }
        sort(a,a+n,cmp);

    }

}