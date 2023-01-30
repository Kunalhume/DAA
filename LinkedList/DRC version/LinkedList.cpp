#include <bits/stdc++.h>
using namespace std; 

struct Node{
	int data ;
    Node* next ;

    Node(int data){
        this->data = data ;
        this->next = nullptr ;
    }

};

class LinkedList
{
private:
    Node* head ;
    int len ;
public:
    LinkedList(){
        head = nullptr ;
        len = 0 ;
    }

    void pushBack(int data){ 
        len++ ;
        Node* curr = new Node(data) ;
        if(head==nullptr){
            head = curr ;
            cout<<"Pushed Backed Succesfully !!\n" ;
            return ;
        }
        Node* temp = head ;
        while(temp->next!=nullptr){
            temp = temp->next ;
        }
        temp->next  = curr ;
        cout<<"Pushed Backed Succesfully !!\n" ;
    }

    void pushFront(int data){
        len++ ;
        Node* curr = new Node(data) ;
        curr->next = head ;
        head = curr ;
        cout<<"Pushed Front Succesfully !!\n" ;
    }


    int size(){
        return len ;
    }


    void printLL(){
        Node* curr = head ;
        while(curr!=nullptr){
            cout<<curr->data<<" " ;
            curr = curr->next ;
        }
        cout<<endl ;
    }

    // Insert function ;

    void insert(int data, int index){  //0 1 2 3 4   (2, 7)
        if(index > len || index<0) return  ;
        len++ ;
        if(index==0){
            pushFront(data);
            return ;
        }
        if(index==len){
            pushBack(data) ;
            return ;
        }
        index-- ;
        Node* curr = head ;
        while(index--){
            curr = curr->next ;
        }
        Node* temp = curr->next ;
        Node* node = new Node(data) ;
        curr->next = node ;
        node->next = temp ;
    }

    void deleteNode(int data){
        Node* curr = head ;
        Node* prev = head ;
        if(curr->data==data){
            len-- ;
            cout<<"LOL you deleted everything brother! That's a proof Size :   "<<len<<"\n" ;
            head = nullptr ; 
            delete curr ;
            return ;
        }
        while(curr!=nullptr && curr->data!=data){
            prev = curr ;
            curr = curr->next ;
        }
        if(curr==nullptr) {
            return ;
        }
        prev->next = curr->next ;
        delete curr ;
        len-- ;
    }

    void reverseLL(){
        Node* prev = nullptr ;
        Node* curr = head ;
        Node* next = curr->next ;
        while(curr!=nullptr){
            curr->next = prev ;
            prev = curr ;
            curr = next ;
            if(next!=nullptr)
            next = next->next ;
        }
        head = prev ;
    }

};

int main(){

    LinkedList list;
    list.pushBack(4) ;
    list.pushBack(5) ;
    list.pushBack(6) ;
    list.pushBack(7) ;
    list.pushBack(8) ;
    list.printLL() ;
    list.reverseLL() ;
    list.printLL() ;
    return 0 ;
}

