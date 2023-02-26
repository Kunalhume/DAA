#include <bits/stdc++.h>
using namespace std;

int BS(vector<int> arr,int target,int begin,int end){
  int mid=(begin+end)/2;

  if(begin>end){
    return -1;
  }

  if(arr[mid]==target){
    return mid;
  }

  else if(mid<target){
    return BS(arr,target,mid+1,end);
  }
  else{
    return BS(arr,target,begin,mid-1);
  }
}


int main(){
  vector<int> arr={1,2,3,4,5,7,8,10,21,64};
  int target = 10;
  int begin=0;
  int end=arr.size()-1;
  int ans = BS(arr,target,begin,end);
  cout<<"Index value : "<<ans;
}