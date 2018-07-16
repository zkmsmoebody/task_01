/*
author:mzk
time 2018/7/16
for oj
*/
#include<stdio.h>
#include<string.h>
#define MAX_LEN 10
#define MAX_WORD 10


int main()
{
    char dic_input[MAX_LEN][2][MAX_WORD+1];
    int i,j;
    char temp[MAX_WORD + 1];
    for(i = 0; i < MAX_LEN; i++)
    {
        gets(temp);
        if( !temp[0] ) break;
        //scanf("%s",temp);
        //printf("%s\n",temp);
        //strcpy(dic_input[i][0], temp);
       //scanf("%s",temp);
       // printf("%s\n",temp);
        //strcpy(dic_input[i][1], temp);
        j = 0;
        while(temp[j])
    }
    int nTotal = i;//num of words
    int k;
    int flag ;
    while(1)
    {
        scanf("%s",temp);
        if(!temp[0]) break;
        flag = 0;
        for(k = 0; k < nTotal; k++)
        {
            if(strcmp(dic_input[k][0], temp) == 0 ) 
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            printf("%s/n",dic_input[k][1]);
        else 
            printf("%s/n","eh");
    }

}
