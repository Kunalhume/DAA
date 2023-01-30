/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        int x =0;
        ListNode* prev = head;
        ListNode* curr = head;
        // ListNode* nextN = head;
        
        while(curr!= nullptr){

            if(head == nullptr){
                return head;
            }

            curr=curr->next;

                while(curr!=nullptr){

                    while(curr->val !=0){
                        x += curr->val;
                        cout<<"X : "<<x<<"\n";
                        curr = curr->next;
                        // if(curr->val == 0){
                        //     break;
                        // }
                    }
                    cout<<"X ans : "<<x<<"\n";
                    // x=0;
                    
                    ListNode* newNode = new ListNode(x);
                    if(prev==head){
                        prev = newNode;
                        // prev = prev->next;
                    }
                    prev->next = newNode;
                    prev = prev->next;
                    // head = prev;

                    newNode->next = newNode;

                    curr=curr->next;
                    x =0;
                }
                head = prev;
            
       }
        return head;

    };

};