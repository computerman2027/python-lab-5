#include<stdio.h>
#include<string.h>

int main()
{
	char str[500];
	char str2[500];
	int i,j,k=0,k2=0;
	printf("Enter a string : ");
	fgets(str,500,stdin);
	int l = strlen(str);
	if(str[l-1]=='\n')
		str[l-1]='\0';
	l = strlen(str);
	strcpy(str2,str);
	str2[l]=' ';
	str2[l+1]='\0';
// 	printf("str2 = %s\n",str2);
	char ans1[500];
	ans1[0]='\0';
	char temp[500];
	temp[0]='\0';
	char temp2[500];
	for(i=0;i<l+1;i++)
	{
        // printf("i = %d\n",i);
        // printf("str2[i] = %d\n",str2[i]);
		if(str2[i]==' ')
		{
		  //  printf("Entering 1\n");
			temp[k2]=' ';
			temp[k2+1]='\0';
// 			printf("temp = %s\n",temp);
			strcat(temp,ans1);
			strcpy(ans1,temp);
			temp[0]='\0';
			k2=0;
// 			printf("ans1 = %s\n",ans1);
		}
		else
		{
		  //  printf("Entering 2\n");
			temp[k2]=str2[i];
			//printf("temp 1 = %s\n",temp);
			k2++;
		}
		
	}
	char ans2[500];
	k=0;
	for(i=l-1;i>=0;i--)
	{
		ans2[k]=str[i];
		k++;
	}
	ans2[k]='\0';
	printf("ans1 = %s\nans2 = %s",ans1,ans2);
}