#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void search(vector<int>vec, int size)
{
  int key, count=0;
  cout<<"Enter the key you want to find: ";
  cin>>key;
  for(int i=0; i<size; i++)
  {
    if(vec[i] == key)
    {
      cout<<"FOUND!"<<endl;
      count++;
      break;
    }
    else
      count++;
  }
  if(count==size)
    cout<<"NOT FOUND!"<<endl;
  cout<<"Number of Comparisons: "<<count<<endl;
}

int main()
{
  int t,i,input,size;
  cout<<"Enter number of test cases: ";
  cin>>t;
  while(t-->0)
  {
    vector<int>vec;
    cout<<"Enter size of your array: ";
    cin>>size;
    cout<<"Enter Elements: ";
    for(i=0; i<size; i++)
    {
      cin>>input;
      vec.push_back(input);
    }
    search(vec, size);
  }
  return 0;
}