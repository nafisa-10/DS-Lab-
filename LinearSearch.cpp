#include<iostream>
using namespace std;
int linear_search(int arr[],int n,int tar)
{
    for(int i = 0;i<n;i++)
    {
        if(arr[i] == tar)
        {
            return i;
        }
    }
        return -1;
    
}
int main()
{
    int n,tar;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];       
    }
    cin >> tar;
    int res = linear_search(arr,n,tar);
    if (res != -1)
    {
        cout << "Found at index " << res << endl;
    }
    else
    {
        cout << " Not Found " << endl;
    }
    return 0;
}
