# include <bits/stdc++.h>
using namespace std;

struct Queue{
  int front,back,count,asize;
  int* arr;

  public:
    Queue(int asize){
      this->asize=asize;
      arr = new int[asize];
      front= back = -1;
      count = 0;
    }

    // push operation
    void push(int x){
      if(count == asize){
        cout<<"Queue is Full"<<"\n";
        return;
      }
      if(back == -1){
        front = back =0;
      }

      arr[back%asize] = x;
      cout<<"Pushed element : "<< x<<"\n";
      back++;
      count++;
    }

    // Pop Operations 
    void pop(){
      if(count == 0){
        cout<<"Queue is Empty"<<"\n";
        return;
      }
      else{
        int temp = arr[front%asize];
        arr[front%asize] = -1;
        cout<<"Poped Element : "<< temp<<"\n";
        front++;
        count--;
        return;
      }
    }

    // Top Operations 
    void Top(){
      if(front==-1){
        cout<<-1<<"\n";
        return;
      }
      cout<<"Top Element : "<<arr[front%asize]<<"\n";
      return;
    }
};

int main(){
  Queue q(5);
  q.push(5);
  q.push(40);
  q.push(6);
  q.push(8);
  q.push(20);
  q.push(14);
  q.Top();
  q.pop();
  q.pop();
  q.pop();
  q.pop();
  q.pop();
  q.pop();
  q.push(45);
  q.Top();
  return 0;
}