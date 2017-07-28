#include <stdio.h>
#include <stdlib.h>
struct node
{
    int a;
    struct node *left;
    struct node *right;
};
void generate(struct node **, int);
int search(struct node *, int);
void delete(struct node **);
int main()
{
    struct node *head = NULL;
    int choice = 0, num, flag = 0, key;
    do
    {
    printf("\nEnter your choice:\n1. Insert\n2. Search\n3. Exit\nChoice: ");
        scanf("%d", &choice);
       switch(choice)
       {
       case 1: 
            printf("Enter element to insert: ");
            scanf("%d", &num);
            generate(&head, num);
            break;
        case 2: 
            printf("Enter key to search: ");
           scanf("%d", &key);
            flag = search(head, key);
            if (flag)
            {
                printf("Key found in tree\n");

            }
            else
            {
               printf("Key not found\n");
            }
            break;
        case 3: 
            delete(&head);
            printf("Memory Cleared\nPROGRAM TERMINATED\n");
            break;
        default: 
            printf("Not a valid input, try again\n");
        }
    } while (choice != 3);
    return 0;
}
