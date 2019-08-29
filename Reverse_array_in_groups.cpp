/*
Given an array arr[] of positive integers of size N. Reverse every sub-array of K group elements.

Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of two lines of input. The first line of each test case consists of an integer N(size of array) and an integer K separated by a space. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each test case, print the modified array.

Constraints:
1 ≤ T ≤ 200
1 ≤ N, K ≤ 107
1 ≤ A[i] ≤ 1018

Example:
Input
2
5 3
1 2 3 4 5
6 2
10 20 30 40 50 60

Output
3 2 1 5 4
20 10 40 30 60 50

you have to also rotate remaining elements*/


#include <iostream>
using namespace std;

int main() {
	int t,r,q;
	cin>>t;
	while(t--)
	{   unsigned int n,k,k1;
	    cin>>n>>k;
	    r=n%k;
	    q=n/k;
	    k1=k;
	    int arr[n];
	    while(q--)
        {for(int j=0;j<k;j++)
         {cin>>arr[k1-(j+1)];}
         k1=k1+k;}
        if(r!=0)
        {
            for(int j=0;j<r;j++)
            cin>>arr[n-(j+1)];

        }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;

}
	return 0;
}
/*same thing can also be implemented with the help of stack*/
