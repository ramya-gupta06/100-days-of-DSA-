/* Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

Input:
- First line: integer p (number of entries in server log 1)
- Second line: p sorted integers representing arrival times from server 1
- Third line: integer q (number of entries in server log 2)
- Fourth line: q sorted integers representing arrival times from server 2)

Output:
- Print a single line containing all arrival times in chronological order, separated by spaces

Example:
Input:
5
10 20 30 50 70
4
15 25 40 60

Output:
10 15 20 25 30 40 50 60 70

Explanation: Compare the next unprocessed arrival time from both logs and append the earlier one to the final log until all entries are processed */
#include <stdio.h>
int main()
{
    int p;
    printf("Enter number of entries in server log 1:");
    scanf("%d",&p);
    int arr1[p];
    printf("Enter arrival time from server 1");
    for(int i=0;i<p;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int q;
    printf("Enter number of entries in server log 2:");
    scanf("%d",&q);
    int arr2[q];
    printf("Enter arrival time from server 2");
    for(int i=0;i<q;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int s=p+q;
    int arr3[s];
    for(int i=0;i<s;i++)
    {
        if(i%2==0)
            arr3[i]=arr1[i];
        else
        arr3[i]=arr2[i];
    }
    for(int i=0;i<s;i++)
    {
        printf(" %d  ", arr3[i]);
    }
    return 0;
}

    
