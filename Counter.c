#include<stdio.h>

int main()
{

    FILE *readfrom;

    char *open = "n.txt"; //Name of origin file.

    int i = 1;
    int n = 0;
    int dif= 0;
    int add = 0;
    int qtd = 0;

    readfrom = fopen(open, "r");

    if(readfrom == NULL)
    {
        printf("Failed to open file.\n");
    }
    else
    {

        while(fscanf(readfrom, "%d\n", &n) > 0)
        {

            dif = n - i;

            if(dif != 0)
            {
                add = dif;
                while(add>0)
                {
                    printf("Missing: %d\n", n - add);
                    qtd++;
                    add--;
                }
            }
            i = n;
            i++;
        }

        if(qtd == 0)
        {
            printf("\n\tNo missing numbers!\n\n");
        }
    }

    fclose(readfrom);

    return 0;
}
