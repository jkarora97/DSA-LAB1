#include <iostream>


using namespace std;

/* Linked list node */
struct Node {
    int data;
    struct Node* next;
};

int largestElement(struct Node* head)
{

    int max = -325454;


    while (head != NULL) {


        if (max < head->data)
            max = head->data;
        head = head->next;
    }
    return max;
}


int smallestElement(struct Node* head)
{

    int min = 999999;


    while (head != NULL) {


        if (min > head->data)
            min = head->data;

        head = head->next;
    }
    return min;
}

void push(struct Node** head, int data)
{
    struct Node* newNode =new Node;

    newNode->data = data;


    newNode->next = (*head);


    (*head) = newNode;
}

// Display linked list.
void printList(struct Node* head)
{
    while (head != NULL) {
     cout<<head->data<<" ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Drier program to test the functions
int main()
{

    struct Node* head = NULL;


    push(&head, 15);
    push(&head, 14);
    push(&head, 13);
    push(&head, 22);
    push(&head, 17);
    cout << "Linked list is : " << endl;

    printList(head);
    cout << "Maximum element in linked list:";


    cout << largestElement(head) << endl;
    cout << "Minimum element in linked list:";

    cout << smallestElement(head) << endl;

    return 0;
}
