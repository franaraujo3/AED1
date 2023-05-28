
#include <stdio.h>
void bubble_sort(int v[9])
{
    int i;
    int j;
    int aux;
    int swapped;
    
    do
    {   
        swapped = 0;
        for(i = 0; i < 9; i++)
        {
            for(j = 0; j < 9 - 1 - i; j++)
            {
                if(v[j] > v[j+1])
                {
                    aux = v[j];
                    v[j] = v[j+1];
                    v[j+1] = aux;
                    swapped = 1;
                }
            }
        }
        i++;
    }while(swapped);
}
int main()
{
    int i;
    int v[9] = {18,16,14,12,10,8,6,4,2};
    
    bubble_sort(v);
    
    printf("\nVetor ordenado:\n");
    for(i = 0; i < 9; i++)
    {
        printf("%d ", v[i]);
    }

    return 0;
}
