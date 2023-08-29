void increment(node **start)
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
			if(p->sal <20000)
			{
				printf("Employee ID %d salary incremented from ₹%.2f to ₹%.2f\n",p->eid,p->sal,(p->sal)*1.10);
				p->sal = (p->sal) *1.10;
				count++;
			}
			p = p->next;
		}
		if(count==0)
			printf("\n---No Employee Found with salary less than ₹20,000---\n\n");
	}
}
