/* #include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	c=a+b;
	return c;
	printf ("result is :",c);
}

*/

    #include<stdio.h>

    int main()
    {
       int a, b, c;

       printf("Enter two numbers to add\n");
       scanf("%d%d", &a, &b);

       c = a + b;

       printf("Sum of the numbers = %d\n", c);
	// result
       return 0;
    }
