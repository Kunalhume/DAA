#include <bits/stdc++.h>
using namespace std;

struct Stack{
  int size;
  int* arr;
  int top ;

  public: 
    Stack(){
      top=-1;
      size=1000;
      arr = new int[size];
    }

    void push(int x){
      top++;
      arr[top]= x;
    }

    int pop(){
      int temp = arr[top];
      top--;
      return temp;
    }

    int Top(){
      int temp = arr[top];
      return temp;
    }

    int Size(){
      int temp = top;
      return temp++;
    }

    string isEmpty(){
      if(top==-1){
        return "YES";
      }
      else return "NO";
    }
};


int main(){
  Stack s;
  s.push(4);
  s.push(12);
  s.push(8);
  cout<<s.Top()<<"\n";
  cout<<s.isEmpty()<<"\n";
  cout<<s.pop()<<"\n";
  cout<<s.pop()<<"\n";
  cout<<s.pop()<<"\n";
  cout<<s.isEmpty()<<"\n";


}