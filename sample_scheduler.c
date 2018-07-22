#include <stdio.h>

#define TOTAL_TASK 3

void TaskA()
{
	
	printf("\nTASK A");
}

void TaskB()
{
	
	printf("\nTASK B");
}

void TaskC()
{
	
	printf("\nTASK C");
}


void main()
{
	     
	 printf("Scheduler is running");
     void (*fun_ptr_arr[])() = {TaskA, TaskB, TaskC};
	
	while (1)
	{
     for(int  Task_Counter=0; Task_Counter< TOTAL_TASK ;Task_Counter++)
	 {
		(*fun_ptr_arr[Task_Counter])();
	 }
	}
}