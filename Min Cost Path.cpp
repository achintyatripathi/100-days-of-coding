
#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
   int t;
    cin>>t;
    while(t--)
    {
      int n,m;
      cin>>n>>m;
      int arr[10][10];
      for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
        cin>>arr[i][j];

      
    
   //int arr[][3] = { {1, 2, 3},{4, 8, 2},{1, 5, 3} }; 
   //int m = 3,n=3;
   
   int i= m,j=n;
    int parent[m][n];
    
    parent[i-1][j-1] = arr[i-1][j-1];
    
    for(i = m-2;i>=0;i--)
    {
        parent[i][n-1] = parent[i+1][n-1] + arr[i][n-1];
        //cout<<parent[i][n-1]<<endl;
    }
    
    for(j = n-2;j>=0;j--)
    {
        parent[m-1][j] = parent[m-1][j+1] + arr[m-1][j];
        //cout<<parent[m-1][j]<<endl;
    }
    
    for(i = m-2;i>=0;i--){
        for(j = n-2;j>=0;j--){
            parent[i][j] = arr[i][j] + min(min(parent[i][j+1] ,parent[i+1][j]),parent[i+1][j+1]);
            //cout<<parent[i][j]<<endl;
        }
    }
    
    cout<<parent[0][0]<<endl;
    
    }
    
    return 0;
}
