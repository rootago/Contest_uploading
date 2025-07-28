#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+20;
struct casino{
    int l,r,real;
};
casino c[N];
bool cmp(casino a,casino b){
    return a.real < b.real;
}
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n,k;
        scanf("%d%d",&n,&k);
        for(int i=0;i<n;i++){
            scanf("%d%d%d",&c[i].l,&c[i].r,&c[i].real);
        }
    //    printf("ok\n");
        bool flag = true;
        sort(c,c+n,cmp);

        for(int i=0;i<n;i++){
            if(c[i].l<=k&&c[i].r>=k)
            {
                if(k<c[i].real){
                    k = c[i].real;

                }
            }
        }

        printf("%d\n",k);
        
    }
}