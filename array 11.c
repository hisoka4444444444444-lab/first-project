#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,deletee;
    printf("Enter the element: \n");
    scanf("%d",&n);
    int value[n];
    for(int i = 0;i < n;i++)
    {
        printf("Enter the number of elements: %d\n",i + 1);
        scanf("%d",&value[i]);

    }
    printf("Enter the number you wants to delete: \n");
    scanf("%d",&deletee);
    for(int i = 0;i < n;i++)
    {
        if(value[i] == deletee){
                 for(int j = i;j < n - 1;j++)
                 {
                     value[j] = value[j + 1];
                 }
            n--;
            break;
        }



    }
    printf("The remaining elements are: ");
    for(int i = 0;i < n;i++)
    {
        printf("%d\n",value[i]);
    }

    return 0;
}
