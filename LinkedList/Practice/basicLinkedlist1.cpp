#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node* next;

  Node(int n){
    this->data=n;
    this->next=nullptr;
  }
};

class basicLinkedlist
{
private:
  Node* head;
  int len;
public:
  basicLinkedlist(){     //Parameterized Constructor
    head=nullptr;
    len=0;
  }


  //Adding Element in back of Linkedlist
  void pushBack(int n){
    //Creating node of given element 
    Node* curr = new Node(n);

    //Basic Condition Check whether Head is NULL or not NULL
    if(head==nullptr){
      head = curr;
      cout<<"Element Pushed Succesfully"<<"\n";
    }
    else{
      //Creating temp variable pointer for linkedlist
      Node*temp =head;

      //Finding last node in linkedlist
      while (temp->next!=nullptr){
        temp=temp->next;
      }
      //Accessing temp->next to the New Node
      temp->next=curr;
      cout<<"Element Pushed Succesfully"<<"\n";
    }
  }



  //Printing All Elements in Linkedlist
  void printLL(){
    Node* temp = head;
    while (temp!=nullptr){
      cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<"\n";
    cout<<"All Elements Succesfully Printed"<<"\n";

  }
};


int main(){
  // int n;
  // cin>>n;
  basicLinkedlist bLL;
  bLL.pushBack(8);
  bLL.pushBack(4);
  bLL.pushBack(6);
  bLL.pushBack(2);
  bLL.pushBack(12);
  bLL.pushBack(64);
  bLL.printLL();
}