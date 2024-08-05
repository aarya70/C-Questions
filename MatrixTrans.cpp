#include <iostream>
#include <string>

using namespace std;

void print(int **arr,int n, int m) {
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}

void solve(int**arr,int n,int m){

  int **mat= new int*[n];
  for(int i=0;i<n;i++){
    mat[i]=new int[m];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      mat[i][j]=arr[i][j];
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      arr[i][j] = mat[j][i];
    }
  }
  
}

int main() {

  int n,m;
  cout<<"Enter rows and cols"<<endl;
  cin>>n>>m;

  int **arr= new int*[n];
  for(int i=0;i<n;i++){
    arr[i]=new int[m];
  }
  cout<<"Enter the matrix"<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }

  cout<<"Before Matrix"<<endl;
  print(arr,n,m);
  solve(arr,n,m);
  cout<<"After Matrix"<<endl;
  print(arr,n,m); 
    
}
