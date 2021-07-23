#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> a;
    a.push_back(1);  //insert at rear end
    a.push_front(2); //insert at front end
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << endl;
    }
    a.pop_back();
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << endl;
    }
    cout << a.empty()<<endl; //to check empty or not
    cout << a.front()<<endl;//display fornt element 
    cout << a.back()<<endl;//display back element 
    a.erase(a.begin(),a.begin()+1);//erase the lement from begin to begin +1
    a.size();
    return 0;
}