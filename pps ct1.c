#include <stdio.h>
int main()
{
    float spacenum;
    int lastdig;
    scanf("%f",&spacenum);
    int x;
    x=spacenum;
    lastdig=x%10;
    printf("%d",lastdig);
	return 0;
}