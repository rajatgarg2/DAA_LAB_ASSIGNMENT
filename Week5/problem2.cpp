#include <bits/stdc++.h>
using namespace std;

void Sumkey(int arr[], int n, int key)
{
	int left=0, right=n-1;
	bool flag=false;
	while(left < right)
	{
		if(arr[left]+arr[right] > key)
			right--;
		else if(arr[left]+arr[right] < key)
			left++;
		else if(arr[left]+arr[right] == key)
		{
			cout<<arr[left]<<" "<<arr[right]<<" ";
			right--;
			flag=true;
		}
	}
	if(flag == false)
		cout<<"No Such pair exist"<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, i, key;
		cin>>n;
		int arr[n];
		for(i=0; i<n; i++)
			cin>>arr[i];
		cin>>key;
		sort(arr, arr + n);
		Sumkey(arr, n, key);
	}
	return 0;
}

/*
For Output
2
10
64 28 97 40 12 72 84 24 38 10
50
15
56 10 72 91 29 3 41 45 61 20 11 39 9 12 94
302
*/