/*
kedane algorithm is used for finding maximum subarray sum
let array be A=[-2,3,2,-1]

BRUTE FORCE ALGORITHM:
it says to start with first element and then calculate sum of all subarays which can be form along with it  and then do same for second element and so on.
time complexity: O(n*n)


KEDANE ALGORITHM:
it uses two terminology :
current maximum: maximum sum of subarray ends at given index
global maximum: maximum sum of all subarrays till now.
time complexity: O(n)

*/

#include <iostream >
using namespace std;

int maximum(int a[],int n)
{int cm,gm;
    cm=gm=a[0];
    for(int i=1;i<n;i++)
    {
        cm=max(a[i],(a[i]+cm));
        if(cm>gm)
        gm=cm;
    }
    return gm;
}

int main()
{
    int t,n,maxi;
    cin>>t;
    while(t--)
    {cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    maxi=maximum(arr,n);
    cout<<maxi<<endl;



    }
}
