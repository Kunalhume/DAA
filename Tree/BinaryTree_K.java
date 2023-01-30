import java.util.*;

import javax.swing.RootPaneContainer;

public class BinaryTree_K {
  
  static class Node{
    int data;
    Node left;
    Node right;

    Node(int data){
      this.data=data;
      this.left=null;
      this.right=null;
    }
  }

  static class Binarytree{
    static int idx=-1;
    public static Node buildTree(int nodes[]){
      idx++; 
      if(nodes[idx]==-1){
        return null;
      }

      Node newNode = new Node(nodes[idx]);
      newNode.left = buildTree(nodes);
      newNode.right = buildTree(nodes);

      return newNode;
    }

    
  }
  public static void preorder(Node root){
    if(root == null){
      return;
    }
    System.out.print(root.data+" ");
    preorder(root.left);
    preorder(root.right);
  }
  
  public static void main(String[] args) {
    int [] nodes ={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Binarytree tree = new Binarytree();
    Node root = tree.buildTree(nodes);
    // System.out.println(root.data);

    preorder(root);

  }
  
}