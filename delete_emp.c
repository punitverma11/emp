int delete(node **start, int eid)
{
	int flag=0;
	node *p, *prev=NULL;
	p = *start;
	if(*start == NULL)
	{
		return 0;
	}
	else if(p->next == NULL)
	{
		if(p->eid == eid)
		{
			*start = NULL;
			free(p);
			return 1;
		}
		else
			return 0;
	}
	else
	{
		while(p != NULL)
		{	
			if(p->eid == eid)
			{
				if(p == *start)
				{
					*start = p->next;
					free(p);
					return 1;
				}
				else
				{
					prev = p->next;
					free(p);
					return 1;
				}
			}
			prev = p;
			p = p->next;
		}
		return 0;
	}
}
