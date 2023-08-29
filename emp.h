

typedef struct node
{
	int eid;
	char name[20];
	float sal;
	char email[30];
	struct node *next;
}node;

int check(node ,int);
void addemp(node ,int, char [], float, char []);
void display(node );
void greater(node );
void increment(node );
int delete(node , int);
void cleanup(node );


