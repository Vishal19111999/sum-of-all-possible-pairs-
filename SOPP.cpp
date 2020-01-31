#include <bits/stdc++.h> 
using namespace std; 
int sumPairs(int arr[], int n) 
{ 
	int sum = 0; 
	for (int i = 0; i < n; i++) 
  {  
		sum = sum + (arr[i] * (2 * n)); 
	} 
return sum; 
} 
int main() 
{ 
	int t;
	cin>>t;
	int arr[t];
  for(int i=0;i<t;i++)
  {
  cin>>arr[i];
 }
	int n = sizeof(arr) / sizeof(arr[0]); 

	cout << sumPairs(arr, n); 
  return 0; 
} 
