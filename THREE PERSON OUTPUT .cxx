#include<stdio.h>

int main()
{
	char NAME1[20],NAME2[20],NAME3[20];
	int ROLL_NO1,ROLL_NO2,ROLL_NO3;
		
	      printf("============FILL THE DATA============\n");
	      
	      printf("FIRST PERSON NAME:\n");
	       scanf("%s",&NAME1);
	       
	       printf("ENTER THE ROLL NO\n");
	       scanf("%d",&ROLL_NO1);
	       
	       printf("SECOND PERSON NAME:\n");           scanf("%s",&NAME2);
	       
	       printf("ENTER THE ROLL NO\n");
	       scanf("%d",&ROLL_NO2);
	       
	     
	       printf("THIRD PERSON NAME:\n");
	       scanf("%s",&NAME3);
	       
	       printf("ENTER THE ROLL NO\n");
	       scanf("%d",&ROLL_NO3);
	       printf("==============DETAILS===========\n");
	       printf("Your Name is:%s\n",NAME1);
	       printf("Your Roll no is:%d\n",ROLL_NO1);
	       
	    
	       printf("Your Name is:%s\n",NAME2);
	       printf("Your Roll no is:%d\n",ROLL_NO2);
	       
	       
	       
	       printf("Your Name is:%s\n",NAME3);
	       printf("Your Roll no is:%d\n",ROLL_NO3);
	       
	       
	       return 0;
}