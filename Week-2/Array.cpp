#include<stdio.h>
#include<string.h>
int main()
 {
	int roll_no;
	char name[69];
	int marks[5];
	int total =0;
	int i;
	
    printf("Enter Roll Number: ");
    scanf("%d",&roll_no);
    
    printf("Enter Name: ");
    scanf("%[^\n]",name);
    
    for(i=0;i<5;i++) 
    {
    	printf("Subject %d: ", i+1);
    	scanf("%d",&marks[i]);
    	total +=marks[i];
	}
	printf("\n ----Student Details (usng array)----\n ");
	printf("Roll Number: %d\n",roll_no);
	printf("name: %s\n",name);
	printf("Marks: ");
	for(i=0; i<5; i++)
	{
		printf("%d",marks[i]);
	}
	printf("\nTotal: %d\n",total);
	getch();
	return 0;
}
