#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));

    int tele=n*n,count=1;
    int minr=0,mincol=0;
    int maxr=n-1,maxcol=n-1;
    
    while(count<=tele)
    {
        //right
        for(int i=mincol;i<=maxcol&&count<=tele;i++,count++)
          arr[minr][i] =count;
        minr++;  

        //down
        for(int i=minr;i<=maxr&&count<=tele;i++,count++)
          arr[i][maxcol]=count;
        maxcol--;

        //left
        for(int i=maxcol;i>=mincol&&count<=tele;i--,count++)
          arr[maxr][i] = count;
        maxr--;

        //up
        for(int i=maxr;i>=minr&&count<=tele;i--,count++)
          arr[i][mincol]=count;
        mincol++;        
    }

    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++)
        cout<<arr[i][j]<<"\t";
      cout<<endl;

    }   

}