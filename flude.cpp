#include<bits/stdc++.h>
using namespace std;
#define INF 1e5+10
const int n=1e5+10;

int main(){
  int s;
  cout<<"Enter the size:";
  cin>>s;
  int arr[s][s];
  for(int i=1;i<=s;i++){
    for(int j=1;j<=s;j++){
    if(i==j){
     arr[i][j]=0;
    }
    else{
      arr[i][j]=INF;
    }
   }
  }
 int e;
 cout<<"Enter the number of Edges:";
 cin>>e;
 for(int i=1;i<=e;i++){
   int x,y,z;
   cin>>x>>y>>z;
   arr[x][y]=z;
 }
 for(int k=1;k<=s;k++){
   for(int i=1;i<=s;i++){
     for(int j=1;j<=s;j++){
       arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
     }
   }
 }
 for(int i=1;i<=s;i++){
   for(int j=1;j<=s;j++){
     if(arr[i][j]==INF){
       cout<<"INF"<<endl;
     }
     cout<<"  ";
     cout<<arr[i][j]<<" ";
   }
     cout<<endl;
  }
}

