void greater(node **start)
{
	int count=0;
	node *p;
	p = *start;
	if(p == NULL)
	{
		printf("\n---No Records Found---\n\n");
	}
	else
	{
		while(p != NULL)
		{
			if(p->sal >= 25000)
			{
				printf("\nEmployee ID     : %d\n",p->eid);
				printf("Employee Name   : %s\n",p->name);
				printf("Employee Salary : ₹%.2f\n",p->sal);
				printf("Employee Email  : %s\n\n",p->email);
				count++;
				p = p->next;
			}
			else
			{
				p = p->next;
			}
		}
		if(count == 0)
			printf("\n---No Employee Found with salary greater than ₹25,000---\n\n");
	}
}
