#include<stdio.h>
#include<string.h>

int main()
{
    char str[500];
    char str2[500];
    int i, j, k = 0, k2 = 0; // Initialize k and k2 to 0

    printf("Enter a string : ");
    fgets(str, 500, stdin);

    int l = strlen(str);
    if(str[l-1] == '\n')  // Corrected the index to l-1 to check for newline character
        str[l-1] = '\0';  // Remove the newline character
    
    l = strlen(str);
    strcpy(str2, str);
    str2[l] = ' ';    // Add a space character at the end
    str2[l+1] = '\0'; // Null terminate the string

    //printf("str2 = %s\n", str2);

    char ans1[500];
    ans1[0] = '\0'; // Initialize ans1 to an empty string
    char temp[500];

    for(i = 0; i < l + 1; i++)
    {
        if(str2[i] == ' ')
        {
            temp[k2] = ' ';
            temp[k2+1] = '\0';
            //printf("temp = %s\n", temp);
            strcat(temp, ans1);
            strcpy(ans1, temp);
            temp[0] = '\0'; // Reset temp to an empty string
            k2 = 0;
            //printf("ans1 = %s\n", ans1);
        }
        else
        {
            temp[k2] = str2[i];
            temp[k2+1] = '\0'; // Null terminate temp
            //printf("temp 1 = %s\n", temp);
            k2++;
        }
    }

    char ans2[500];
    k = 0;
    for(i = l - 1; i >= 0; i--)
    {
        ans2[k] = str[i];
        k++;
    }
    ans2[k] = '\0';

    printf("ans1 = %s\nans2 = %s", ans1, ans2);

    return 0;
}