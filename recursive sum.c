#include <stdio.h>

int Sum(int n){
  if (n == 0) {
        return 0;
    }

    int r = n + Sum(n - 1);

    return r;
}

int main()
{
    int n = 5;

    int sum = Sum(n);

    printf("Sum of First %d Natural Numbers: %d", n, sum);
    return 0;
}
