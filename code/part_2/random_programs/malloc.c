#include stdio.h

int main()
{
    int numnum = 10;
    int *ptr = (int *)malloc(numnum * sizeof(int));
    for (int i = 0; i < numnum; i++)
    {
        ptr[i] = i;
    }
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("Memory successfully allocated using malloc.\n");
        printf("The elements of the array are: ");
        for (int i = 0; i < numnum; i++)
        {
            printf("%d, ", ptr[i]);
        }
        free(ptr);
        printf("Malloc Memory successfully freed.\n");
    }
    return 0;
}