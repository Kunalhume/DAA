#include <bits/stdc++.h>
using namespace std;

void printN(int n, int count){
  cout<<"Kunal \n";
  count++;
  if(count==n){
    return;
  }
  return printN(n,count);

}

int main(){
  int n =5;
  int count=0;
  printN(n,count);
}