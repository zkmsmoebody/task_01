/*
author:mzk
date 2018/7/16
for oj
*/
#include<stdio.h>
#include<string.h>
#define MAX_LEN 100000
#define MAX_WORD 10

typedef struct dic_node{
    char eng[MAX_WORD + 1];
    char newword[MAX_WORD + 1];
}NODE;

int bsearch(NODE a[], int low, int high, char *target)
{
    int mid;
    int result;
    while(low <= high)
    {
        mid = (low + high) / 2;
        result = strcmp(target, a[mid].newword);
        if(result < 0 ) high = mid - 1;
        if(result > 0 ) low = mid + 1;
        if(result == 0 ) return mid; 
    }
    return -1;
}

int myCompare(NODE *a, NODE *b)
{
    return strcmp(a->newword, b->newword) ;
}

int main()
{
    char temp[MAX_WORD + 1];
    int nTotal = 0;
    NODE node[MAX_LEN + 1];
    char input_temp[30];
    while (fgets(input_temp, 29, stdin), input_temp[0] != '\n')
    {
        sscanf(input_temp, "%s%s", node[nTotal].eng, node[nTotal].newword);
        nTotal++;
    }
    qsort(node, nTotal, sizeof(NODE), myCompare);
    int pos = 0;
    while(1)
    {
        if(scanf("%s",temp) == EOF ) break;
        pos = bsearch(node, 0, nTotal-1,temp);
        if(pos == -1) printf("eh\n");
        else printf("%s\n",node[pos].eng);
    }
    return 0;
}
