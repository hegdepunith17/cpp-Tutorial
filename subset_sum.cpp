#include <iostream>
#include <string>
#include <vector>
using namespace std;
//Pepcoding 
void subsetsun(int arr[], int index, vector<int> result, int sofsubset, int target)
{
    if (index == 3)
    {
        if (sofsubset == target)
        {
            for (int i = 0; i < result.size(); i++)
            {
                cout << result[i]<<",";
            }
        }

        return;
    }
    subsetsun(arr, index + 1, result, sofsubset, target);
    result.push_back(arr[index]);
    subsetsun(arr, index + 1, result, sofsubset + arr[index], target);
}
int main()
{
    vector<int > result;
    int arr[3] = {10, 20,15};

    subsetsun(arr, 0, result, 0, 25);
    return 0;
}

// GFG
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// int   subsetsun(int arr[], int n,int sum)
// {
//    if(n==0){
//        return (sum==0)? 1:0;

//    }
//    return subsetsun(arr,n-1,sum)+subsetsun(arr,n-1,sum-arr[n-1]);

// }
// int main()
// {

//     int arr[3] = {10, 20, 15};

//     cout<<subsetsun(arr,3,27);
//     return 0;
// }