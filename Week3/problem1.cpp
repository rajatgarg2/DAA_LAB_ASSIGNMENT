#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
  int comps=0, shifts=0;
  int i, j, key;
  for(i=1; i<n; i++)
  {
    key = arr[i];
    j=i-1;
    while(j>=0 && key<arr[j])
    {
      arr[j+1] = arr[j];
      j--;
      shifts++;
      comps++;
    }
    arr[j+1] = key;
    shifts++;
  }
  for(i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"\ncomparisons = "<<comps<<endl<<"shifts = "<<shifts<<endl;
}

int main()
{
  int t,n,i;
  cin>>t;
  while(t--)
  {
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    insertion_sort(arr,n);
  }
  return 0;
}

/*
test cases
3
8
-23 65 -31 76 46 89 45 32
10
54 65 34 76 78 97 46 32 51 21
15
63 42 223 645 652 31 324 22 553 -12 54 65 86 46 325
*/