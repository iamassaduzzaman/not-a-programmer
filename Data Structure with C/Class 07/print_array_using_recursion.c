#include <stdio.h>

void print_array(int a[], int n, int i)
{
    if (n == i) return; // base case
    printf("%d ", a[i]);
    print_array(a, n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nOutput: ");

    print_array(a, n, 0);
    return 0;
}