#include<stdio.h>
#include<string.h>
#define max_size 200000
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
        if((fp = fopen("64mb.txt", "r")) == NULL)
        {
                printf("can not open file");
        }
        else
	{
                fread(temp,sizeof(temp), 1 ,fp);
		fclose(fp);
	}
        reverse();
	if((fp = fopen("64mb.txt", "w")) == NULL)
        {
                printf("can not open file");
        }
        else
	{
		int k = 0;
                for(k = 0; k < strlen(temp); k++)
		{	if(temp[k] != '\n')
			fprintf(fp, "%c", temp[k]);
		}
		fclose(fp);
	}
				
        return 0;
}

