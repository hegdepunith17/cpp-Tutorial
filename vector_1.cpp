#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
// {         like int in functions parameter &v
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " "; //to access element
    }
    cout << endl;
}
int main()
{

    vector<int> vec1;        //zero length integer vector
    vector<char> vec2(4);    //4-element character vector
    vector<char> vec3(vec2); //4-element character vector from vec2
    vector<int> vec4(6, 3);  //6-element vector of 3s
    vector<int> vec1;        //creating vec1 integer type zero length

    for (int i = 0; i < vec1.size(); i++)
    {
        int element;
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element); //insert an elemnt
    }

    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter, 566); //inserted before begin
    display(vec1);

    vec1.pop_back(); //delete
    display(vec1);

    return 0;
}
