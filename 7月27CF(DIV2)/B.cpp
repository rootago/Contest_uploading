#include <bits/stdc++.h>
using namespace std;    

int main(){
    int T;
    scanf("%d", &T);

    while(T--){
        int n;
        deque<int> dq;scanf("%d", &n);  
        for(int i = 0; i < n; i++)
        {
            int x;scanf("%d",&x);
            dq.push_back(x);
        }
        printf("L");
        int last_pop = 0;
        int this_pop = dq.front();
        dq.pop_front();
       // printf("%d ",this_pop);
        while(dq.size()>1){
            int left = dq.front();
            int right = dq.back();
            int next_pop;
            if((left > this_pop &&  this_pop > right))
            {
                if(last_pop < this_pop){
                    next_pop = right;
                    dq.pop_back();
                    printf("R");
                }
                else{
                    next_pop = left;
                    dq.pop_front();
                    printf("L");
                }
            }
            else if(left < this_pop &&  this_pop < right ){
                if(last_pop < this_pop){
                    next_pop = left;
                    dq.pop_front();
                    printf("L");
                }
                else{
                    next_pop = right;
                    dq.pop_back();
                    printf("R");
                }
            }
            else if(left < this_pop && right < this_pop){
                if(left > right){
                    printf("R");
                    next_pop = right;
                    dq.pop_back();
                }
                else{
                    printf("L");
                    next_pop = left;
                    dq.pop_front();
                }
            }
            else{
                if(left > right){
                    printf("L");
                    next_pop = left;
                    dq.pop_front();
                }
                else{
                    printf("R");
                    next_pop = right;
                    dq.pop_back();
                }

            }
          //  printf("%d ", next_pop);
            last_pop = this_pop;
            this_pop = next_pop;
            
        }
        printf("L\n");
    }

}