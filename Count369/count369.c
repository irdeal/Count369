//
//  main.c
//  Count369
//
//  Created by Yong Hwan Ho on 2016. 7. 17..
//  Copyright © 2016년 Yong Hwan Ho. All rights reserved.
//

#include <stdio.h>

#define MAX369 10100000
#define MIN369 1
#define REMINDER 20150523

void getXcount(int , int , int * );
int is369char(int);

int main(int argc, const char * argv[]) {
    // insert code here...
    int up=0, bottom=0;
    int xcount=0;
    
    printf("Enter bottom number(%d <= NUMBER <= %d): ", MIN369, MAX369);
    scanf("%d", &bottom);
    
    printf("Enter upper number(%d <= NUMBER <= %d): ", MIN369, MAX369);
    scanf("%d", &up);
    
    getXcount(bottom,up,&xcount);

    printf("bottom number is %d\nupper number is %d\nxcount is %d\n",bottom, up, xcount%REMINDER);
    
    return 0;
}

void getXcount(int bottom, int up, int * xcount)
{
    for (int i=bottom ;i <= up;i++)
        if (!(i%3) || is369char(i))
            (*xcount)++;
    
    return;
}

int is369char(int var)
{
    int i=0;
    while (var)
    {
        i = var%10;
        if (i && !(i%3) )
            return 1;
        var = var/10;
    }
        
    return 0;

}