#include<stdio.h>
#include<string.h>
#define max_size 2000000
char temp[max_size] = {0};
void reverse()
{
        int i, j, len;
        char fuck;
        len = strlen(temp);
        for(i = 0, j = len - 1; i < j; i++, j--)
        {
                fuck = temp[i];
                temp[i] = temp[j];
                temp[j] = fuck;
        }
}
int main()
{
        FILE *fp;
        if((fp = fopen("64MB.txt", "r")) == NULL)
        {
                printf("can not open file");
        }
        else
	{
                fread(temp,sizeof(temp), 1 ,fp);
		fclose(fp);
	}
        reverse();
	if((fp = fopen("64MB.txt", "w")) == NULL)
        {
                printf("can not open file");
        }
        else
	{
		fputs(temp, fp);
	}
				
        return 0;
}

