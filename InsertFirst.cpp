#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    int arr[n+1];
    for(int i = 0; i<n;i++)
    {
        cin >> arr[i];
    }
    int val;
    cin >> val;
    arr[n] = val;
    for(int i=0;i<=n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
