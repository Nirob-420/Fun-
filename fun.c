#include<stdio.h>
#include<conio.h>

int main() 
{
    int i, j, n;

    printf("যেকোনো সংখ্যা লিখ: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
    {
        for(j = 1; j <= i; j++) 
        {
            printf("🖕");
        }
        printf("\n");
    }

    getch();  // waits for user input to close the console
    return 0;
}
