#include <iostream>
#include<vector>
using namespace std;

vector<int>left_rotation(vector<int>arr, int rotations)
{
vector<int>rotated_array;
for (size_t i=rotations;i<arr.size();i++)
{
rotated_array.push_back(arr[i]);
}
for (size_t i=0;i<rotations;i++)
{
rotated_array.push_back(arr[i]);
}
return rotated_array;
}


int main()
{
int n , d;
cin>>n;
cin>>d;
vector<int>arr(n);
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
vector<int>result=left_rotation(arr,d);
for(int i=0;i<n;i++)
{
cout<<result[i]<<" ";
}
cout<<endl;
}
