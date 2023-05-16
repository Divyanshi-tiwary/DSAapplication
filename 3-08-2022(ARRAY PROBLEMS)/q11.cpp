#include<stdio.h>

struct employee
{
    int id;
    char name[10];
    int age;
    int basic;
    
}emp[100];

void result(struct employee * emp,int a);

int main()
{
    int num;
    printf("How many employees: ");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        printf("Enter id name age and basic salary of employee %d : ",i+1);
        scanf("%d %s %d %d",&emp[i].id,&emp[i].name,&emp[i].age,&emp[i].basic);
    }
    
    result(emp,num);
    
    
    return 0;
}


void result(struct employee* emp,int a){

    float da,hra,total;
    for (int i = 0; i < a; i++)
    {
        da=0.8*emp[i].basic;
        hra=0.1*emp[i].basic;
        total=emp[i].basic+da+hra;
        printf(" Id: %d Name: %s Age: %d Basic Salary:%d Gross Salary: %f\n\n",emp[i].id,emp[i].name,emp[i].age,emp[i].basic,total);

    }
    
}
