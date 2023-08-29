TARGET=emp
CC=gcc
CFLAGS= -Wall

$(TARGET) : emp.o add_emp.o display_emp.o increment.o delete_emp.o display_sal.o
	$(CC) $(CFLAGS) emp.o add_emp.o display_emp.o increment.o delete_emp.o display_sal.o -o $(TARGET)
	
emp.o : emp.c
	$(CC) $(CFLAGS) -c emp.c
	
add_emp.o : add_emp.c
	$(CC) $(CFLAGS) -c add_emp.c
	
display_emp.o : display_emp.c
	$(CC) $(CFLAGS) -c display_emp.c
	
delete_emp.o : delete_emp.c
	$(CC) $(CFLAGS) -c delete_emp.c
	
display_sal.o : display_sal.c
	$(CC) $(CFLAGS) -c display_sal.c
	
clean :
	rm *.o
	rm emp
