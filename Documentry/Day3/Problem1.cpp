// CODE :

#include <iostream>

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0); // Dummy node to simplify code
        ListNode* current = dummyHead;
        int carry = 0; // To store carry during addition

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
        }

        return dummyHead->next; // Return the next node after the dummy node
    }
};

// Helper functions to create and print linked lists
ListNode* createList(const std::vector<int>& values) {
    ListNode* dummyHead = new ListNode(0);
    ListNode* current = dummyHead;
    for (int val : values) {
        current->next = new ListNode(val);
        current = current->next;
    }
    return dummyHead->next;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val;
        if (head->next != nullptr) std::cout << " -> ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Example usage
int main() {
    Solution solution;
    
    // Create linked lists for numbers 342 (2 -> 4 -> 3) and 465 (5 -> 6 -> 4)
    ListNode* l1 = createList({2, 4, 3});
    ListNode* l2 = createList({5, 6, 4});

    ListNode* result = solution.addTwoNumbers(l1, l2);

    // Print the result (807 represented as 7 -> 0 -> 8)
    printList(result);

    return 0;
}


// OUTPUT :

// Input:
// List 1: 2 -> 4 -> 3
// List 2: 5 -> 6 -> 4

// Processing:
// Step 1: 2 + 5 = 7 (carry = 0)
// Step 2: 4 + 6 = 10 (carry = 1, node = 0)
// Step 3: 3 + 4 + 1 (carry) = 8 (carry = 0)

// Output:
// Result: 7 -> 0 -> 8
