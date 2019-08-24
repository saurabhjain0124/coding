/*
Given an array of N size. The task is to rotate array to left by d elements where d is less than or equal to N.

Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of three lines. The first line of each test case consists of an integer N, where N is the size of array.
The second line of each test case contains N space separated integers denoting array elements. The third line of each test case contains "d" .

Output:
Corresponding to each test case, in a new line, print the modified array.

Constraints:
1 ≤ T ≤ 200
1 ≤ N ≤ 200
1 ≤ A[i] ≤ 1000

Example:
Input
1
5
1 2 3 4 5
2

Output
3 4 5 1 2

*/

#include <iostream>
using namespace std;

int main() {
    int t,n,d,x;
	cin>>t;
	while(t--)
	{cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cin>>d;
	while(d--)
	{x=arr[0];
	for(int i=0;i<n-1;i++)
	arr[i]=arr[i+1];
	arr[n-1]=x;
	}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<"\n";
	}
	return 0;
}
