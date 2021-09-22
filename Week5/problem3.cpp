#include <bits/stdc++.h>
using namespace std;

void commonElements(int arr1[], int arr2[], int n1, int n2)
{
	int i=0, j=0;
	while(i<n1 && j<n2)
	{
		if(arr1[i] == arr2[j])
		{
      cout<<arr1[i]<<" ";
      i++;
      j++;
    }
		else if(arr1[i] < arr2[j])
			i++;
		else if(arr1[i] > arr2[j])
		  j++;
	}

}

int main()
{
	int n1, n2, i, key;
	cin>>n1;
	int arr1[n1];
	for(i=0; i<n1; i++)
	 cin>>arr1[i];
  cin>>n2;
	int arr2[n2];
	for(i=0; i<n2; i++)
		cin>>arr2[i];
	sort(arr1, arr1 + n1);
  sort(arr2, arr2 + n2);
	commonElements(arr1, arr2, n1, n2);
	return 0;
}

/*
For Output
7
10 10 34 39 55 76 85
12
10 10 11 30 30 34 51 55 69 72 89 34
*/