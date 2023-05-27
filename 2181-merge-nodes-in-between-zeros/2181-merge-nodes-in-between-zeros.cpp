class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head; // pointer declarations
        ListNode* adder = temp;
        while(temp){ // outer while loop, should never finish
            if(temp->val == 0){ // if we are at a first 0
                adder = temp; // reassign adder
                int add = 0; // and declare a temporary int
                while(adder->next != 0){ // inner loop walks through list from same spot
                    adder = adder->next; // move adder
                    add = add + adder->val; // update adding sum
                    if(adder->next->val == 0){break;} // and break if we hit a second 0.
                } // now we have gotten the sum to add to the first 0, and adder at last non-zero; must determine if there are more ints to add:
                temp->val = temp->val + add; // update temp (first 0) to new value
                if(adder->next->next == nullptr){ // if this is the last set of numbers
                    temp->next = nullptr; // assign last element to point at nothing, and return the list
                    return head;
                }else{ // still another set, need to update pointers and start summing again
                    temp->next = adder->next; // point temp to the next 0
                    temp = adder; // move temp to last int
                    temp = temp->next; // push temp to the 0
                }
            }
        }
        return nullptr;
    }
};