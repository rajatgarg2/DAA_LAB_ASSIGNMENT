#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int partition(int arr[], int low, int up)
{
  int pivot=arr[up];
  int i=low-1, j=low;
  while(j<=up)
  {
    if(arr[j]<=pivot)
    {
      i++;
      swap(arr[i],arr[j]);
    }
    j++;
  }
  return i;
}
void quick_sort(int arr[], int low, int up)
{
  if(low < up)
  {
    int p = partition(arr, low, up);
    quick_sort(arr, low, p-1);
    quick_sort(arr, p+1, up);
  }
}
bool duplicates(int arr[], int n)
{
  int i;
  bool flag=false;
  for(i=0; i<n; i++)
  {
    if(arr[i]==arr[i+1])
    {
      flag = true;
      return flag;
    }
  }
  return flag;
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
    quick_sort(arr, 0, n-1);
    if(duplicates(arr, n))
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  return 0;
}

/*
test cases
3
5
28 52 83 14 75
10
75 65 1 65 2 6 86 2 75 8
15
75 35 86 57 98 23 73 1 64 8 11 90 61 16 20
*/