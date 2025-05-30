#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int low,int high,int tar)
{
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(arr[mid] == tar)
        {
            return mid;
        }
        else if(arr[mid] > tar)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
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
    int res = binary_search(arr,n,0,n-1,tar);
    if(res != -1)
    {
        cout << "Found at index " << res << endl;
    }
    else
    {
        cout << "Not Found " << endl;
    }
    return 0;

}
