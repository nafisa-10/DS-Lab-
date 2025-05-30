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
    int pos;
    cin >> pos;
    while(pos < 1 || pos > n+1)
    {
        cout << "invalid pos" << endl;
        cin >> pos;
    }
    for(int i = n;i>pos - 1;i--)
    {
        arr[i] = arr[i-1];
    }
    int val;
    cin >> val;
    arr[pos -1] = val;
    for(int i = 0; i<n+1;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
