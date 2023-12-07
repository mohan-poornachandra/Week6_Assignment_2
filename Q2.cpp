#include<iostream> 
using namespace std;
int main()
{
    int arr[10][10];
    int m;
    cout<<"Enter no of rows: "; cin>>m;

    cout<<"Enter matrix elements: "<<endl;
    for(int i=0;i<m;i++)
      for(int j=0;j<m;j++)
       cin>>arr[i][j];

    //Transpose the matrix
    for(int i=0;i<m;i++)
      for(int j=i+1;j<m;j++)
      {
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
      }  

      //Swapping elements w.r.t the middle rows
      for(int i=0;i<m/2;i++)
        for(int j=0;j<m;j++)
        {
            int temp=arr[i][j];
           arr[i][j]=arr[m-1-i][j];
           arr[m-1-i][j]=temp;
        }  

      for(int i=0;i<m;i++){
      for(int j=0;j<m;j++)
       cout<<arr[i][j]<<"\t";
       cout<<endl;
      }   
}