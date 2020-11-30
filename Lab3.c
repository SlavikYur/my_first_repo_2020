#include <stdio.h>
#include <stdlib.h>

void happiness(char number[], int *k, int *i)
{
    int sum = 0;

    for (int j=*k-1; j<=*i-1; j += *k)
        {
            printf("%c", number[j]);
            sum += number[j]-48;
        }

    if (sum % 3 == 0) printf("\nYES"); else printf("\nNO");
}

int main()
{
    char number[100];
    int k, i=-1;

    do
    {
        i++;
        scanf("%c", &number[i]);
    }
    while ((number[i] >= 48) && (number[i] <= 57));


     scanf("%d", &k);

    happiness(number, &k, &i);

    cout << "Hello";	

    return 0;
}
