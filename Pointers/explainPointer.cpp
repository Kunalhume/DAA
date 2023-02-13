# include <bits/stdc++.h>
using namespace std;

int main(){
  // int arr[]={2,5,7,8,1};
  // // cout<<arr<<"\n";
  // cout<<arr[2]<<"\n";

  // // Creating Pointer 'q'
  // int *q;
  // q=arr;

  // cout<<"Arr Pointer : "<<("%P",arr)<<"\n";
  // cout<<"New created pointer : "<<("%P",q)<<"\n";

  // cout<<"Arr Pointer value: "<<("%d",2[arr])<<"\n";
  // cout<<"New created pointer value : "<<("%d",q[2])<<"\n";


  // // Incrementing  Pointer 'arr'
  // // Incremented by int size(4) of 'arr'
  // // It's Pointing to next index of 'arr' or next element address
  // cout<<"Arr Pointer increment : "<<("%P",arr+1)<<"\n";

  // // Incrementing Address of 'arr'
  // // Incremented by total size of 'arr'
  // cout<<"&Arr Pointer increment : "<<("%P",&arr+1)<<"\n";
  
  
  // cout<<"&Arr[index] Pointer increment : "<<("%P",&arr[0]+1)<<"\n";


  // cout<<"Arr Pointer Address: "<<("%d",*arr+3)<<"\n";
  
  // cout<<"Arr Pointer value: "<<("%d",*(arr+3))<<"\n";

  
  // Taking Input array using Pointer 
  int arr[5];
  int *q = arr;
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
  {
    int x;
    cin>>x;
    i[q]=x;
  }

  for (int i = 0; i < *(&arr+1)-arr; i++)
  {
    cout<<*(q+i)<<" ";
  }
  
  
}