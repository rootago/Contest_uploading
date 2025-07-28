#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
double x[N],y[N];
int main(){
    double ln2 = log(2);
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lf%lf",&x[i],&y[i]);
    }
    double res = 0;
    for(int i=1;i<n;i++){
        double dis = sqrt((x[i]-x[i-1])*(x[i]-x[i-1])+(y[i]-y[i-1])*(y[i]-y[i-1]));
       // printf("%.2lf\n",dis);
        double k = (log(dis)+log(ln2))/ln2;
        if(k<=0) k = 0;
       // printf("%.2lf\n",k);
        res += (2*k+2*dis/(pow(2,k)));
    }
    printf("%lf\n",res);
}