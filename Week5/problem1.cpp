#include<bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;

void getMax(char arr[], int n)
{
    int count[ASCII_SIZE] = {0};
    int max=0, i, sum=0;
    char res;
    for (i=0; i<n; i++)
    {
      count[arr[i]]++;
      if(max < count[arr[i]])
      {
        max=count[arr[i]];
        res=arr[i];
      }
      sum += count[arr[i]];
    }
    if(sum!=n)
      cout<<res<<" - "<<max<<endl;
    else
      cout<<"No Duplicates Present"<<endl;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n, i;
    cin>>n;
    char arr[n];
    for(i=0; i<n; i++)
      cin>>arr[i];
    getMax(arr, n);
}
  return 0;
}

/* For Output
3
10
a e d w a d q a f p
15
r q p g v y u m q a d j c z e
20
g t l l t c w w a g l c w d s a a v c l
*/