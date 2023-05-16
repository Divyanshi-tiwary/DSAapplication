#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int num;
    struct node *next;
};
 
int create(struct node **);
int palindrome_check (struct node *, int);
 
int main()
{
    struct node *p = NULL;
    int result, count;
 
    printf("Enter data into the list\n");
    count = create(&p);
    result = palindrome_check(p, count);
    if (result == 1)
    {
        printf("The linked list is a palindrome.\n");
    }
    else
    {
        printf("The linked list is not a palindrome.\n");
    }
 
    return 0;
}
 
int palindrome_check (struct node *p, int count)
{
    int i = 0, j;
    struct node *front, *ptr;
 
    while (i != count / 2)
    {
        front = ptr = p;
        for (j = 0; j < i; j++)
        {
            front = front->next;
        }
        for (j = 0; j < count - (i + 1); j++)
        {
            ptr = ptr->next;
        }
        if (front->num != ptr->num)
        {
            return 0;
        }
        else
        {
            i++;
        }
    }
 
    return 1;
}
 
int create (struct node **start)
{
    int c, count = 0;
    struct node *temp;
 
    do
    {
        printf("Enter number(write -1 to end the linked list): ");
        scanf("%d", &c);
        count++;
        temp = (struct node *)malloc(sizeof(struct node));
        temp->num = c;
        temp->next = *start;
        *start = temp;
    }while (c != -1);
    printf("\n");
 
    return count;
}
