#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int difference(int arr[], int size, int key)
{
  int count=0;
  int i, j;
  sort(arr, arr+size);
  for(i=size-1; i>0; i--)
  {
    for(j=i-1; j>=0; j--)
    {
      if(arr[i]-arr[j] == key)
        count++;
    }
  }
  return count;
}

int main()
{
  int t, size, i, key, result;
  cin>>t;
  while(t--)
  {
    cin>>size;
    int arr[size];
    for(i=0; i<size; i++)
      cin>>arr[i];
    cin>>key;
    cout<<difference(arr, size, key)<<endl;
  }
  return 0;
}