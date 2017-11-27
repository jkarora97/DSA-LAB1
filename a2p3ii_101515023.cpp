
#include<iostream>
using namespace std;


struct Node
{
    int value;
    int row_position;
    int column_postion;
    struct Node *next;
};

void create_new_node(struct Node** start, int non_zero_element,
                     int row_index, int column_index )
{
    struct Node *temp, *r;
    temp = *start;
    if (temp == NULL)
    {
        // Create new node dynamically
        temp = new Node();
        temp->value = non_zero_element;
        temp->row_position = row_index;
        temp->column_postion = column_index;
        temp->next = NULL;
        *start = temp;

    }
    else
    {
        while (temp->next != NULL)
            temp = temp->next;

        // Create new node dynamically
        r = new Node();
        r->value = non_zero_element;
        r->row_position = row_index;
        r->column_postion = column_index;
        r->next = NULL;
        temp->next = r;

    }
}

// This function prints contents of linked list
// starting from start
void PrintList(struct Node* start)
{
    struct Node *temp, *r, *s;
    temp = r = s = start;

    cout<<"row_position: ";
    while(temp != NULL)
    {

        cout<<temp->row_position<<" ";
        temp = temp->next;
    }
   cout<<"\n";

    cout<<"column_postion: ";
    while(r != NULL)
    {
       cout<<r->column_postion<<" ";
        r = r->next;
    }
    cout<<"\n";
    cout<<"Value: ";
    while(s != NULL)
    {
      cout<<s->value<<" ";
        s = s->next;
    }
   cout<<"\n";
}



int main()
{

    int sparseMatric[4][5] =
    {
        {0 , 0 , 3 , 0 , 4 },
        {7 , 0 , 5 , 7 , 0 },
        {0 , 5 , 0 , 0 , 0 },
        {0 , 2 , 6 , 0 , 1 }
    };


    struct Node* start = NULL;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)


            if (sparseMatric[i][j] != 0)
                create_new_node(&start, sparseMatric[i][j], i, j);

    PrintList(start);

    return 0;
}
