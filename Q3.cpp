#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter no of rows and col: ";
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter matrix elements:"<<endl;
    for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
        cin>>arr[i][j];

    for(int j=0;j<n;j++)
    {
        if(j%2) 
           for(int i=0;i<m;i++)
            cout<<arr[i][j]<<" ";
        else 
           for(int i=m-1;i>=0;i--)
             cout<<arr[i][j]<<" ";               
    }    
}