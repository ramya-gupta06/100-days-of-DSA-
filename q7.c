/* Problem: Write a recursive function fib(n) to compute the n-th Fibonacci number where fib(0)=0 and fib(1)=1.

Input:
- Single integer n

Output:
- Print the n-th Fibonacci number

Example:
Input:
6

Output:
8

Explanation: Sequence: 0,1,1,2,3,5,8 at positions 0,1,2,3,4,5,6 */
#include <stdio.h>
int fib(int x)
{
    if(x==0)
    return 0;
    if(x==1)
    return 1;
    return fib(x-1) + fib(x-2);

}
int main()
{
    int n;
    printf("Enter integer: ");
    scanf("%d",&n);
    int y= fib(n);
    printf("%d ",y);

return 0;
}

