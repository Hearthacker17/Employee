#include<stdio.h>
struct employee
{
int age;
char name[15];
long phonenumber;
int salary;
};
int i;
struct employee emp[20];
void addEmployee(int i)
{
printf("Enter name of employee %d:\n",i+1);
scanf("%s",emp[i].name);
printf("Enter the age of employee %d:\n",i+1);
scanf("%d",&emp[i].age);
printf("Enter the phone number of employee %d:\n",i+1);
scanf("%ld",&emp[i].phonenumber);
printf("Enter the salary of employee %d:\n",i+1);
scanf("%d",&emp[i].salary);
}
void display(int n)
{
printf("Name Age Phone Number Salary\n");
for(i=0;i<n;++i)
{
printf("%s %d %ld   %d\n",emp[i].name,emp[i].age,emp[i].phonenumber,emp[i].salary);
}
}
int main()
{
printf("Enter the number of employees: ");
int n;
scanf("%d",&n);
for(i=0;i<n;++i)
addEmployee(i);
display(n);
}
