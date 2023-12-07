#include<iostream>

using namespace std;

int main()
{
    int arr[10][10];
    int m,n;
    cout<<"Enter no of rows and columns "<<endl;
    cin>>m>>n;
    cout<<"Enter matrix elements: "<<endl;
     for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
        cin>>arr[i][j];  
    
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        if((i==j)||(i+j==n-1)) cout<<arr[i][j]<<"  ";
        else cout<<"  ";
      }  
      cout<<endl;
   }  

   
   


}