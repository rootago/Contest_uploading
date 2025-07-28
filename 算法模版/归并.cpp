#include <bits/stdc++.h>
using namespace std;
const int N = 10000+10;
int tmp[N];

long long cnt = 0;
void merge_sort(int q[],int l,int r)
{
    if(l>=r) return;
    int mid = (l+r)/2;
    merge_sort(q,l,mid);
    merge_sort(q,mid+1,r);

    int m=l,n=mid+1,k=0;
    while(m<=mid&&n<=r){
        if(q[m]<=q[n]){

            tmp[k++] = q[m++];
            
        }
        else{
            cnt += mid - m + 1;  // 从m到mid 都比q[n] 大
            tmp[k++] = q[n++];
            
        }
    }
    while(m<=mid){

        tmp[k++] = q[m++];
    }
    while(n<=r){

        tmp[k++] = q[n++];
    }



    for(int x = l,i=0;x<=r;x++){
        q[x] = tmp[i++];
    }

}
int main(){
    int q[] = {6,1,2,3,4,5};
    merge_sort(q,0,5);
    for(int i=0;i<6;i++){
        printf("%d ", q[i]);
    }
    printf("%lld\n",cnt);
}