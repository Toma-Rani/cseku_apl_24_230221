
#include<stdio.h>
#include<string.h>
void trimstring(char *str);
int main()
{
    char str[100];

    gets(str);

          trimstring(str);

}
void trimstring(char *str)
{
    int l=strlen(str);
    int i,j;
    for(i=0;i<l;i++)
    {
        if(str[i]==' ')
        {
            for(j=i;j<l;j++)
            {
                str[j]=str[j+1];
            }
        }
    }
    puts(str);
}

