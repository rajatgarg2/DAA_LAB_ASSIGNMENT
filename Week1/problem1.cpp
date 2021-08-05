#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void search(vector<int>vec, int size)
{
  int key, count=0;
  cin>>key;
  for(int i=0; i<size; i++)
  {
    if(vec[i] == key)
    {
      count++;
      break;
    }
    else
      count++;
  }
  if(count==size)
    cout<<"Not Present "<<count<<endl;
  else
    cout<<"Present "<<count<<endl;
}

int main()
{
  int t,i,input,size;
  cin>>t;
  while(t-->0)
  {
    vector<int>vec;
    cin>>size;
    for(i=0; i<size; i++)
    {
      cin>>input;
      vec.push_back(input);
    }
    search(vec, size);
  }
  return 0;
}