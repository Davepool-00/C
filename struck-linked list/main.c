#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// !! syntax for makiung the node

    struct Node {
        char  *data;
        struct Node *next;
    };


// !! bubble sort function
void BubbleSort(struct Node *head) {
    int swapped;
    struct Node *ptr;
    struct Node *last = NULL;



    do {
        swapped = 0;
        ptr = head;

        while (ptr->next != last) {

            //!! using string.h || strcmp to compare
            if (strcmp(ptr->data, ptr->next->data) > 0) {

                //!! swapping begins here
                char *temp = ptr->data;
                ptr->data = ptr->next->data;
                ptr->next->data = temp;
                swapped = 1;
            }
            // !! to compare another node
            ptr = ptr->next;
        }
        // !! and this updates the current node after it is swapped
        last = ptr;
    } while (swapped);
}


// !! This makes the list to be printed
    void PrintLIST(struct Node *node){
        while (node != NULL){
            printf("\n %s \n",node->data);
            node = node->next;
        }
    }

int main(){
    //!! Here you create nodes
    //!! basically you DATA and Pointer

    struct Node *head; //!! this is the head and it should be a null because it should be initialized
    struct Node *one = NULL;
    struct Node *two = NULL;
    struct Node *three = NULL;
    struct Node *four = NULL;
    struct Node *five = NULL;

    //!! alocate memory here...
    //?? Using malloc here... memory allocation
    //!! making thie size here ...

    one = malloc(sizeof(struct Node));
    two = malloc(sizeof(struct Node));
    three = malloc(sizeof(struct Node));
    four = malloc(sizeof(struct Node));
    five = malloc(sizeof(struct Node));

    //!! now to add the values of the nodes
    
    one -> data  = "2 ako sunod";
    two -> data = "3 kini sunod";
    three -> data = "4 unya nako";
    four -> data = "1 akoy una";
    five -> data = "5 ako last";

    // !! now to connect the nodes
    one -> next = two;
    two -> next = three;
    three -> next = four;
    four -> next = five;
    five -> next = NULL;

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