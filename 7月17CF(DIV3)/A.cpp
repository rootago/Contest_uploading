#include <bits/stdc++.h>
using namespace std;
int T;
int main(){

    scanf("%d",&T);getchar();
    while(T--){
        char c;
        int res = 10;
        scanf("%c",&c);
        while(c!='\n'&&c!=EOF){
            res = min(res,c-'0');
            scanf("%c",&c);
        }
        printf("%d\n",res);
    }
}