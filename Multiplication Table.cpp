#include <stdio.h>
#include <conio.h>

int main()
{
    int num, rows, i;

    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("\nMultiplication table for %d:\n", num);
    for (i = 1; i <= rows; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    getch();
    return 0;
}
