/*
Given an array A and an integer K. Find the maximum for each and every contiguous subarray of size K.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case contains a single integer N denoting the size of array and the size of subarray K. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print the maximum for every subarray of size k.

Constraints:
1 ≤ T ≤ 200
1 ≤ N ≤ 107
1 ≤ K ≤ N
0 ≤ A[i] <= 107

Example:
Input:
2
9 3
1 2 3 1 4 5 2 3 6
10 4
8 5 10 7 9 4 15 12 90 13

Output:
3 3 4 5 5 5 6
10 10 10 15 15 90 90*/

#include<bits/stdc++.h>
#define forall(a,b) for(int i=a;i<b;i++)
using namespace std;
void sliding_window(int n,int k,int arr[],vector<int> &ans)
{
 deque <int> dq;
 for(int i=0;i<n;i++)
 {//for removing unwanted elements out of window
     while(!dq.empty() && dq.front()<=i-k )
     dq.pop_front();
//making double ended queue  in descending order
     while(!dq.empty() && arr[i]>arr[dq.back()])
     dq.pop_back();

     dq.push_back(i);
     if(i>=k-1)
     ans.push_back(arr[dq.front()]);
 }


}
int main()
{int t;
	cin>>t;
	while(t--)
	{
        int n,k;
	    cin>>n>>k;
	    int arr[n];
	    forall(0,n)
	    cin>>arr[i];
	    vector<int> ans;
	    sliding_window(n,k,arr,ans);
	    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
        cout<<endl;


	}
	return 0;

}
