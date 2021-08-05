#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void binary_search(vector<int>vec, int size, int key)
{
  int count=0, left=0, right= size-1;
  int mid = (left+right)/2;

  while(left <= right)
    {
      if (key == vec[mid])
      {
        count++;
        cout<<"Present "<<count<<endl;
        break;
      }
      else if (key < vec[mid])
      {
        right = mid-1;
        count++;
      }
      else
      {
        left = mid+1;
        count++;
      }
      mid = (left+right)/2;
    }
    if (left > right)
        cout<<"Not Present "<<count<<endl;
    return;
}

int main()
{
  int t, i, input, size, key;
  cin>>t;
  while(t--)
  {
    vector<int>vec;
    cin>>size;
    for(i=0; i<size; i++)
    {
      cin>>input;
      vec.push_back(input);
    }
    cin>>key;
    binary_search(vec, size, key);
  }
  return 0;
}