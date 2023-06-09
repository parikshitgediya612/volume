#include<stdio.h>
 
 
struct student
{
	int stu_roll_no;
	float stu_maths_marks,stu_che_marks,stu_phy_marks;
	char stu_name[100];
}s[100];

int main()
{
	int i;
	
	
	for(i=0;i<5;i++)
	{
		printf("enter student roll no:");
		scanf("%d",&s[i].stu_roll_no);
		printf("enter student name:");
		scanf("%s",&s[i].stu_name);
		printf("enter student maths marks");
		scanf("%f",&s[i].stu_maths_marks);
		printf("enter student chemistry marks");
		scanf("%f",&s[i].stu_che_marks);
		printf("enter student physics marks");
		scanf("%f",&s[i].stu_phy_marks);
    }
    
    printf("\n*************************************\n");
    printf("\n");
    
    for(i=0;i<5;i++)
    {
    	float percentage=(s[i].stu_maths_marks+s[i].stu_che_marks+s[i].stu_phy_marks)/300.0*100;
    	printf("student roll no.:%d\n",s[i].stu_roll_no);
    	printf("student percentage:%.2f%%\n",percentage);
	}
}
