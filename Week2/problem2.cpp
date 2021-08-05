#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int sequence(vector<int>vec, int size)
{
  int i, j, k;
  for(i=0; i<size-1; i++)
  {
    for(j=i+1; j<size; j++)
    {
      int key = vec[i]+vec[j];
      auto it = find(vec.begin(), vec.end(), key);
      if (it != vec.end())
      {
        k = it-vec.begin();
        cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
        return 0;
      }
    }
  }
  return -1;
}

int main()
{
  int t, size, i, input, key, result;
  cin>>t;
  while(t--)
  {
    cin>>size;
    vector<int>vec;
    for(i=0; i<size; i++)
    {
      cin>>input;
      vec.push_back(input);
    }
    if(sequence(vec, size) == -1)
      cout<<"No Sequence Found"<<endl;
  }
  return 0;
}