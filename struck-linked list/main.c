    #include <stdio.h>
    #include <stdlib.h>

    struct Node {
        int data;
        struct Node *next;
    };

// !! bubble sort function
void BubbleSort(struct Node *head) {
    int swapped;
    struct Node *ptr;
    struct Node *last = NULL;

    // Check if list is empty
    if (head == NULL)
        return;

    do {
        swapped = 0;
        ptr = head;

        while (ptr->next != last) {
            if (ptr->data > ptr->next->data) {
                int temp = ptr->data;
                ptr->data = ptr->next->data;
                ptr->next->data = temp;
                swapped = 1;
            }
            ptr = ptr->next;
        }
        last = ptr;
    } while (swapped);
}


// !! This makes the list to be printed
    void PrintLIST(struct Node *node){
        while (node != NULL){
            printf("%d ",node->data);
            node = node->next;
        }
    }

int main(){
    //!! Here you create nodes
    // !! basically you DATA and Pointer

    struct Node *head; //!! this is the head and it should be a null because it should be initialized
    struct Node *one = NULL;
    struct Node *two = NULL;
    struct Node *three = NULL;
    struct Node *four = NULL;
    struct Node *five = NULL;

    // !! alocate memory here...
    // ?? Using malloc here... memory allocation
    one = malloc(sizeof(struct Node));
    two = malloc(sizeof(struct Node));
    three = malloc(sizeof(struct Node));
    four = malloc(sizeof(struct Node));
    five = malloc(sizeof(struct Node));

    //!! now to add the values of the nodes
    one -> data  = 111;
    two -> data = 22;
    three -> data = 3;
    four -> data = 4444;
    five -> data = 55555;

    // !! now to connect the nodes
    one -> next = two;
    two -> next = three;
    three -> next = four;
    four -> next = five;
    five -> next = NULL;

// !! this is to test
head = one;

printf("Default list: ");
PrintLIST(head);

BubbleSort(head);
printf("\nSorted list: ");
PrintLIST(head);

//!! free memory
    free(one);
    free(two);
    free(three);
    free(four);
    free(five);
    
    return 0;
}


adad