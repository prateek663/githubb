// #include <stdio.h>
// // fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);

// int fibonacci(int);
// int fibonacci(int n)
// {

//     if (n == 1 || n == 2)
//     {
//         return n - 1;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
// fibonacci(int);

// int main()
// {
//     int n = 4;
//     printf("the value of fibonacci series at %d is %d", n, fibonacci(n));
//     return 0;
// }



#include <stdio.h>

// Function to calculate Fibonacci number
int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 4;
    printf("The value of Fibonacci series at %d is %d", n, fibonacci(n));
    return 0;
}
