#include<stdio.h>
int main()
{
    int i,count=0,j;
    char str[200];
    scanf("%s",str);
    for(i=0; str[i] != '\0'; i+=1)
    {
        if(str[i] == '0')
        {
            for(j=i+1; str[j] != '0'; j+=1);
    
            if(str[j] != '\0' && j>(i+1))
            {
                count++;
                j = j-1;
            }
        }
    }
    printf("%d",count-1);
}
