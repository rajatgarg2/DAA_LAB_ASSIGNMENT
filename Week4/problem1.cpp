#include<iostream>
using namespace std;

int comp,inv;
void merge(int A[], int start, int mid, int end)
{
    int i,p,q;
    p = start ,q = mid+1;
    int Arr[end-start+1] , k=0;
    for(i = start; i<=end; i++)
    {
        if(p > mid)
        {
            Arr[ k++ ] = A[ q++] ;
            comp++;
        }
        else if(q > end)
        {
            Arr[k++] = A[p++];
            comp++;
            inv++;
        }
        else if(A[p] < A[q])
        {
            Arr[k++] = A[p++];
            comp++;
        }
        else
        {
            Arr[k++] = A[q++];
            comp++;
            inv++;
        }
    }
    for (p=0; p<k; p++)
        A[start++] = Arr[p];
}

void merge_sort (int A[], int start, int end)
{
    if(start<end)
    {
        int mid;
        mid = (start + end)/2 ;
        merge_sort (A, start , mid);
        merge_sort (A, mid+1 , end);
        merge      (A, start , mid , end);
   }
}

int main()
{
    int t,i,n;
    cout << "Enter the number of test cases: ";
    cin>>t;
    while(t--)
    {
        cout<<endl<<"Enter the size of the array: ";
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        comp=0, inv=0;
        merge_sort(a,0,n-1);
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        cout<<"Comparisons: "<<comp<<endl;
        cout<<"Inversions : "<<inv <<endl;
    }
    return 0;
}