#include<stdio.h>

int main()
{

    FILE *readfrom;

    char *open = "n.txt"; //Name of origin file.

    int i = 1;
    int n = 0;
    int dif= 0;
    int add = 0;

    readfrom = fopen(open, "r");

    while(fscanf(readfrom, "%d\n", &n) > 0)
    {

        dif = n - i;

        if(dif != 0)
        {
            add = dif;
            while(add>0)
            {
                printf("Missing: %d\n", n - add);
                add--;
            }
        }
        i = n;
        i++;
    }

    return 0;
}
