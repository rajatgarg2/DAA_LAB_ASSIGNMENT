#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int search_with_frequency(int arr[], int size, int key)
{
  int *lower = lower_bound(arr, arr+size, key);
  if(lower == arr+size || *lower != key)
    return -1;
  int *upper = upper_bound(arr, arr+size, key);
    return upper-lower;
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
    result = search_with_frequency(arr, size, key);
    if(result == -1)
      cout<<"Key no Found"<<endl;
    else
      cout<<key<<" - "<<result<<endl;
  }
  return 0;
}