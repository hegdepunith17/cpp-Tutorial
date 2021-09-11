#include<iostream>
using namespace std;
void stock(int arr[],int n){
    int maxprofit=0;
    for (int i=1;i<n;i++){
        if(arr[i]-arr[i-1]>0){
         maxprofit=(maxprofit+arr[i]-arr[i-1]);
        }
    }
    cout<<maxprofit;
}
int main()
{
    int arr[7]={100, 180, 260, 310, 40, 535, 695};
    int n=7;
    stock(arr,n);
 return 0;
}