import java.util.*;

/**
 * SingularLinkedlist
 */
public class SingularLinkedlist {
  Node head;
  int size =0 ;
  // Basically we creating Node with default address --> next = null 
  class Node{
    String data;
    Node next;

    Node(String data){
      this.data = data;
      this.next=null;
    }
  }

  // Insertion or Add Function :- 1) First   2) Last
  
  // 1. Add First 
  public void addFirst(String data){
    Node newNode = new Node(data);
    if(head ==null){
      head = newNode;
    }
    else{
      newNode.next = head;
      head = newNode;
    }
    size++;
  }


  // 2. Add Last 
  public void addLast(String data){
    Node newNode = new Node(data);
    if(head==null){
      head=newNode;
    }
    else{
    Node curNode = head;
    while (curNode.next != null){
      curNode = curNode.next;
    }

    curNode.next = newNode;
    }
    size++;
  }

  // Print Function 
  public void printList(){
    if(head==null){
      System.out.println("List is Empty");
    }
    Node currNode = head;
    while(currNode != null){
      System.out.print(currNode.data + " -> ");
      currNode=currNode.next;
    }
    System.out.println("NULL");
    System.out.println("List Size : "+ size);
  }



  public static void main(String[] args) {

    // Created Object of Parent class SingularLinkedlist 
    SingularLinkedlist list = new SingularLinkedlist();
    list.addFirst("332");
    list.addLast("512");
    list.addFirst("222");
    list.printList();
  }
}