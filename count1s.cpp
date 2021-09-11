#include<iostream>
using namespace std;
void consecutive(int a[],int n){
    int resof1=0;
    int count =0;
    for (int  i = 0; i < n; i++)
    {
        if (a[i]==1)
        {
            count++;
            resof1=max(resof1,count); 

        }
        else count = 0;
        
    }
    cout<<"No of 1 --->"<<resof1<<endl;
    
}
int main()
{
    int a[12]={1,0,1,1,1,1,0,0,1,1,1,0};
    consecutive(a,12);
 return 0;
}