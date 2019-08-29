/* Given an array A of size N, print the reverse of it.

Input:
First line contains an integer denoting the test cases 'T'. T testcases follow. Each testcase contains two lines of input. First line contains N the size of the array A. The second line contains the elements of the array.

Output:
For each testcase, in a new line, print the array in reverse order.

Constraints:
1 <= T <= 100
1 <= N <=100
0 <= Ai <= 100

Example:
Input:
1
4
1 2 3 4
Output:
4 3 2 1 */

/* algorthm
let we have four elements in array so we have to reverse those four elements
arr[0]=arr[n-1]
arr[1]=arr[n-2]
arr[2]=arr[n-3]
arr[3]=arr[n-4]

so hence rule is arr[i]=arr[n-(i+1)]
 */

#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[n-(i+1)];
	    for(int i=0;i<n;i++)
	    cout<<arr[i]<<" ";
	    cout<<endl;

	}
	return 0;
}
