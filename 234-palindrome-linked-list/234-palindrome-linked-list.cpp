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
    ListNode* getMiddle(ListNode* head){
        ListNode* Fast = head->next;
        ListNode* Slow = head;
        
        while(Fast != NULL && Fast->next){
            Slow=Slow->next;
            Fast=Fast->next->next;
        }
        return Slow;
    }
    
public:
    ListNode* reverse(ListNode* head){
        ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        while(current!=NULL){
           next = current->next;
           current->next = prev;
           prev = current;
           current = next;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
       //check list is empty or having only 1 element
        if(head == NULL || head->next == NULL)
            return true;
        
        //step 1 : get middle element
        ListNode* middle = getMiddle(head);
        
        //step 2: reverse list after mid
        ListNode* temp = middle->next;
        middle->next = reverse(temp);
        
        //step3 : compare both halves
        ListNode* head1 = head;
        ListNode* head2 = middle->next;
        
        while(head2!=NULL){
            if(head1->val !=head2->val) return false;
            
            head1=head1->next;
            head2=head2->next;
        }
        return true;
        
        
    }
};