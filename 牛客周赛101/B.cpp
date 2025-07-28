#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    scanf("%d",&n);
    int g = n/20;
    int remain = n % 20;
    
    int torch;
    torch = n/5*2;
    
    int redtorch = g * 2;
    if(remain>=5&&remain<=14) redtorch+=1;
    else if(remain>=15) redtorch += 2;
    
    int redrail = g * 19 * 2;
    
    int normalrail = g * 3;
    
    printf("%d %d %d %d",torch,redtorch,normalrail,redrail);
}