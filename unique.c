#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    system("cls");
    printf("\n Enter size of Array \n");
    int size;
    scanf("%d", &size);
    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter Elemment %d \t", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nThe Given Array is \n \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", a[i]);
    }
    int ctrl;
    for (int i = 0; i < size; i++)
    {
        ctrl = 0;
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                if (a[i] == a[j])
                {
                    ctrl++;
                }
            }
        }
        if (ctrl == 0)
        {
            printf("\n%d", a[i]);
        }
    }

    return 0;
}
