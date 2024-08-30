#include<stdio.h>
#include<string.h>

int main()
{
	char str[500];
	char str2[500];
	int i,j,k,k2;
	printf("Enter a string : ");
	fgets(str,500,stdin);
	int l = strlen(str);
	if(str[l]=='\n')
		str[l]='\0';
	l = strlen(str);
	strcpy(str2,str);
	str2[l]=' ';
	str2[l+1]='\0';
	printf("str2 = %s\n",str2);
	char ans1[500];
	ans1[0]='\0';
	char temp[500];
	char temp2[500];
	for(i=0;i<l+1;i++)
	{
		if(str2[i]==' ')
		{
			temp[k2]=' ';
			temp[k2+1]='\0';
			printf("temp = %s\n",temp);
			strcat(temp,ans1);
			strcpy(ans1,temp);
			strcpy(temp,"");
			k2=0;
			printf("ans1 = %s\n",ans1);
		}
		else
		{
			temp[k2]=str2[i];
			printf("temp 1 = %s\n",temp);
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
	printf("ans1 = %s\n ans2 = %s",ans1,ans2);
}
