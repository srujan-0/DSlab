#include<stdio.h>
#include<string.h>
union Student{
	int roll_no;
	char name[69];
	int marks[5];
	int total;
};
int main()
 {
	union Student s;
	int tep_marks[5],total = 0;
	int i;
	
    printf("Enter Roll Numbe: ");
    scanf("%d",&s.roll_no);
    printf("Roll Numbe: %d\n",s.roll_no);
    
    printf("Enter Name: ");
    scanf("%[^\n]",s.name);
    printf("Name: %s\n",s.name0;
    
    printf("Enter Marks:\n");
    for(i=0;i<5;i++) 
    {
    	printf("Subject %d: ", i+1);
    	scanf("%d",&temp_marks[i]);
    	total += temp_marks[i];
	}
	printf("Marks: ");
	for(i=0; i<5; i++)
	{
		printf("%d",temp_marks[i]);
	}
    s.total=total;
    printf("\nTotal: %d\n",s.total);
    
    return 0;
}
