#include<stdio.h>
#include<stdbool.h>
#include<pthread.h>
#include<unistd.h>
struct resources
{
 	bool pen ;
	bool paper ;
	bool question_paper ;
	bool all_three ;
};
int main()
{
	int n=3;
	struct resources  Arr[n];
	Arr[0].pen=true;		
	Arr[0].paper = false;
	Arr[0].question_paper = false;
	Arr[0].all_three= false;
	Arr[1].pen=false;		
	Arr[1].paper = true;
	Arr[1].question_paper = false;
	Arr[1].all_three = false;
	Arr[2].pen=false;		
	Arr[2].paper = false;
	Arr[2].question_paper = true;
	Arr[2].all_three = false	;
	while(Arr[0].all_three==false||Arr[1].all_three==false||Arr[2].all_three==false)
	{
		int ch1,ch2;
		printf("\nResources:\n1.pen\n2.paper\n3.question paper\n Enter the two things which is to be placed on the shared table: ");
		scanf("%d%d",&ch1,&ch2);
		if(ch1==1 && ch2==2 && Arr[2].all_three==false)
		{
			Arr[2].all_three=true ;
			printf("Third Student has completed the task\n");
		}
		if(ch1==2 && ch2==3 && Arr[0].all_three==false)
		{
			Arr[0].all_three=true;
			printf("First Student has completed the task\n");
		}
		if(ch1==1 && ch2==3 && Arr[1].all_three==false)
			while(s[0].all_three==false||s[1].all_three==false||s[2].all_three==false)
	{
		if(ch1==1 && ch2==3 && Arr[1].all_three==false)
		{
			Arr[1].all_three=true;
			printf("Second Student has completed the task\n");
		}
	}
	printf("All the students now have completed their respective tasks succesfully\n");
	return 0;
}


