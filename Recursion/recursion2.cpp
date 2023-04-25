#include <bits/stdc++.h>
using namespace std;


int fact(int N,int T){
  if(N==1) {
    cout<<1<<" "; 
    return 1;
  }

  int temp=N*fact(N-1,T);
  if(temp > 0 && temp <= T){
    cout<<temp<<" ";
  }
  else{
    return 0;
  }

  return temp;
}

int sum(int N){
  if(N==0) return 0;

  int temp=N+sum(N-1);
  cout<<temp<<" ";
  return temp;
}

int main(){
  int n;
  cin>>n;
  // sum(n);
  fact(n,n);
}