#include<stdio.h>
#include<stdint.h>
#include<math.h>
#include<string.h>
#include"Tools.h"
void clear_input_buffer() {
    char c;
    // 循环读取直到读取到的字符为'\n'或者文件结束符(EOF)
    while ((c = getchar()) != '\n' && c != EOF) {
        // 空循环体，只是为了读取并清除缓冲区中的字符
    }
}

int Inchar(char * pstchar)
{   
    char buffernumb[100] = {0};
    int inumber = 0;
    int iStrlen = 0;

    setbuf(stdin, NULL);

    if(fgets(buffernumb,sizeof(buffernumb),stdin)!=NULL)
    {
        strcpy(pstchar,buffernumb);
        iStrlen = strlen(pstchar)-1;
        //printf("inputvalue = %c\n",buffernumb[0]);
    }
    else
    {
        printf("输入读取失败！！！\n");
    }
    
    memset(buffernumb,0,100);
    return iStrlen; 
}

int Iinput(int defaultValue)
{
    int iSetValue = 0;
    char cCmd[128] = {0};
    for(;;)
    {
        if(Inchar(&cCmd[0]))
        {
            iSetValue = atoi(&cCmd[0]);
            printf("value = %d \n",iSetValue);
        }
        else
        {
            iSetValue = defaultValue;
            printf("don't input any value\n");
        }
        return iSetValue;
    }
}
