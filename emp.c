#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "emp.h"

void display(node **start)
{
	node *p;
	p = *start;
	if(p == NULL)
	{
		printf("---No Records Found---\n\n");
	}
	else
	{
		while(p != NULL)
		{
			printf("Employee ID     : %d\n",p->eid);
			printf("Employee Name   : %s\n",p->name);
			printf("Employee Salary : ₹%.2f\n",p->sal);
			printf("Employee Email  : %s\n\n",p->email);
			p = p->next;
		}
	}
}





void cleanup(node **start)
{
	node *p,*p1;
	p=*start;
	while(p != NULL)
	{
		p1 = p;
		p = p->next;
		free(p1);
	}
}

int main()
{
		node *start=NULL;
		int choice,eid;
		char name[20],email[30];
		float sal;
		
		while(1)
		{
			printf("1. Add Employee\n");
			printf("2. Display Employees\n");
			printf("3. Display details of Employees with salary greater than 25000\n");
			printf("4. Increment Salary\n");
			printf("5. Delete Employee\n");
			printf("0. Exit\n");
			printf("Enter: ");
			scanf("%d",&choice);
			//printf("\n");
			
			switch(choice)
			{
				case 1:
					printf("Enter Employee ID     : ");
					scanf("%d",&eid);
					if(check(&start,eid) == 0)
					{
						printf("\n---Employee ID %d already exists---\n\n",eid);
						break;
					}
					printf("Enter Employee Name   : ");
					scanf("%s",name);
					printf("Enter Employee Salary : ");
					scanf("%f",&sal);
					printf("Enter Employee Email  : ");
					scanf("%s",email);
					
					addemp(&start,eid,name,sal,email);
					break;
				case 2:
					printf("\n\n---Employee Records---\n");
					display(&start);
					break;
				case 3:
					greater(&start);
					break;
				case 4:
					increment(&start);
					break;
				case 5:
					printf("\nEnter Employee ID to delete: ");
					scanf("%d",&eid);
					if(delete(&start,eid) == 1)
						printf("---Employee Deleted Successfully---\n");
					else
						printf("---No Employee found with the ID %d ---\n\n",eid);
					break;
				case 0:
					cleanup(&start);
					exit(0);
					break;
				default:
					printf("Invalid Choice\n");
					break;
			}
		}
}
