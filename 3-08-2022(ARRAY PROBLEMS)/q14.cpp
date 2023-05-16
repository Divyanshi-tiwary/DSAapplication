#include <stdio.h>

int main() {
    
  struct student {
    char id[20];
    char name[80];
    float marks;
  };
  int n;
  printf("enter the number of students:\n");
  scanf("%d",&n);
  
  struct student details[n];
  struct student *ptr = NULL;
  int i;
  ptr = details;
  for (i = 0; i < n; i++) {
    printf("Enter detail of student %d\n", (i + 1));
    printf("Enter ID: ");
    scanf("%s", ptr->id);
    printf("Enter name: ");
    scanf("%s", ptr->name);
    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);
    ptr++;
  }
  ptr = details;
  
  for (i = 0; i < n; i++) {
    printf("\nDetail of student :%d\n", (i + 1));
    printf("ID: %s\n", ptr->id);
    printf("First Name: %s\n", ptr->name);
    printf("Marks: %f\n", ptr->marks);

    ptr++;
  }
  
  return 0;
}

