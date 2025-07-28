#include <iostream>
using namespace std;
// 快速排序
void quick_sort(int q[],int l,int r)
{
    if(l>=r) return ;  // l比r大或l与r位置重合了
    // l > r 什么时候发生？ q的大小是2 左中就是q[0],下面递归的时候左中就变成q[-1]
    int i = l - 1;
    int j = r + 1;
    int pivot = q[(l+r)/2]; 
    while(i<j){  // 为什么这里不能加等号？
        do i++; while(q[i]<pivot);  // 为什么这里不能加等号？
        do j--; while(q[j]>pivot);
        int tmp = q[i];
        q[i] = q[j];
        q[j] = tmp; // swap(q[i],q[j]);
    }
    quick_sort(q,l,j);
    quick_sort(q,j+1,r);
}
int main(){

    int q[] ={5,4,3,2,1};
    quick_sort(q,0,4);
    for(int i=0;i<5;i++){
        printf("%d ",q[i]);
    }
}

    
    



