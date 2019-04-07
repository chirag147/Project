#include<stdio.h>
int faculty_num;
int student_num;
struct faculty
{
    char faculty_name[10];
    int facluty_time;
}f[20];			
struct Student
{
	char student_name[10];
	int student_time;
}s[20];	
void main()
{   
    int i,f1,s1,t1=0,t2=60;
  
	printf("Number of Faculty requested for queries: "); 
	scanf("%d",&faculty_num);
	for(i=1;i<=faculty_num;i++)
	{
		printf("Enter name of faculty%d: ",i);
		scanf("%s",&f[i].faculty_name);
		printf("Enter time for faculty %d:		
		scanf("%d",&f[i].facluty_time);
		printf("\n");
	}
	
	printf("\n\n");
	
	printf("Number of Students requested for queries: ");  
	scanf("%d",&student_num);
	for(i=1;i<=student_num;i++)
	{
		printf("Enter name of student%d: ",i);
		scanf("%s",&s[i].student_name);
		printf("Enter time for Student %d: "
		scanf("%d",&s[i].student_time);
		printf("\n");
	}
	
	f1=60/faculty_num; 		
	s1=60/student_num;		
	
	for(i=1;i<=faculty_num;i++)
	{  
		if(f[i].facluty_time<f1)
		{
			t1=t1+f[i].facluty_time;
			printf("\n The query is received for faculty name : %s for %d minutes ",f[i].faculty_name,f[i].facluty_time);	
			
		}
		else if(f[i].facluty_time=f1)
		{
			t1=t1+f1;
			printf("\n The query is received for faculty name : %s for %d minutes ",f[i].faculty_name,f[i].facluty_time);
		}
		else
		{
			t1=t1+f1;
			printf("\n The query is not received for faculty name : %s ",f[i].faculty_name);	
			
		}
	}
	
	printf("\n\n");
	
	for(i=1;i<=student_num;i++)
	{
		if(s[i].student_time<s1)
		{
			t2+=s[i].student_time;
			printf("\n The query is received for Student name :%s for %d minutes ",s[i].student_name,s[i].student_time);	
			
		}
		else if(s[i].student_time=s1)
		{
			t2+=s1;
			printf("\n The query is received for Student name :%s for %d minutes ",s[i].student_name,s[i].student_time);
		}
		else
		{
			t2+=s1;
			printf("\n The query is not received for Student name :%s ",s[i].student_name); 
		}
	}
	
    int	total=t1+t2-60;			
	int avg=total/(faculty_num+student_num);	
	printf("\n\nTotal querying time = %d ",total);  	
	printf("\nAverage querying time = %d ",avg);
	
	printf("\n\nThe total time spent for query is %d",total);
	printf("\n Average time spent for query is %d",avg);
			
}

