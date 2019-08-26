/*
Given an array of positive integers. Your task is to find the leaders in the array.
Note: An element of array is leader if it is greater than or equal to all the elements to its right side. Also, the rightmost element is always a leader.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N denoting the size of array.
The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print all the leaders.

Constraints:
1 <= T <= 100
1 <= N <= 107
0 <= Ai <= 107

Example:
Input:
3
6
16 17 4 3 5 2
5
1 2 3 4 0
5
7 4 5 7 3
Output:
17 5 2
4 0
7 7 3


*/
//brute force algorithm
//time complexity O(n*n)
#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  long int n,x;
	  cin>>n;
	  long int arr[n];
	  for(int i=0;i<n;i++)
	  cin>>arr[i];
	  for(int i=0;i<n-1;i++)
	  {   int temp=0;
	      x=arr[i];
	      for(int j=i+1;j<n;j++)
	      {
	       if(arr[j]>x)
	       temp=1;
	      }
	      if(temp==0)
	      cout<<(arr[i])<<" ";
	  }
	  cout<<(arr[n-1])<<endl;

	}
	return 0;
}

//scan from right O(n)
#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  long int n,maximum;
	  cin>>n;
	  long int arr[n];
	  for(long int i=0;i<n;i++)
	  cin>>arr[i];
	  maximum=arr[n-1];
	  cout<<maximum<<" ";
	  for(long int i=n-2;i>=0;i--)
      {
          if(arr[i]>=maximum)
          {
              cout<<arr[i]<<" ";
              maximum=arr[i];
          }
      }
      cout<<"\n";
	  }
	return 0;
}
