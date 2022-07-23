#include <stdio.h>
#include <stdlib.h>

//declare functions that are used
void hieu(int* a, int* b, int sum, int n, int m);
void hop (int* a, int* b, int sum, int n, int m);
void giao(int* a, int* b, int sum, int n, int m);

int main (void)
{
    //promt the user to type in an A array

    //int n = get_int("how many numbers in your first array? ");
    int n;
    printf("how many numbers are there in your first array? ");
    scanf("%d", &n);
    int *a = malloc(n * sizeof(int));
    printf("Type in your first array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &a[i]);
    }

    //promt the user to type in an B array

    int m;
    printf("how many numbers are there in your second array? ");
    scanf("%d", &m);
    int *b = malloc(m * sizeof(int));
    printf("Type in your second array: \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%i", &b[i]);
    }

    //sum
    int sum;
    sum = n + m;

    //keep printing out this
        //1. hieu
        //2. hop
        //3. giao
    while (&free)
    {
        printf("Menu\n");
        printf("Hit '1' for hieu\n");
        printf("Hit '2' for hop\n");
        printf("Hit '3' for giao\n");
        printf("Hit '0' to break\n");
        int user_input;
        scanf("%i", &user_input);
        //get user input
            //if the user type2 in 1, run function hieu
            if (user_input == 1)
            {
                hieu(a, b, sum, n, m);
            }
            //if the user types in 2, run function hop
            if (user_input == 2)
            {
                hop(a, b, sum, n, m);
            }
            //if the user types in 3. run function giao
            if (user_input == 3)
            {
                giao(a, b, sum, n, m);
            }
            if (user_input == 0)
            {
                break;
            }
    }
        //free memory
        free(a);
}

//hieu function

void hieu(int* a, int* b, int sum, int n, int m)
{
    //allocate memory for the "hieu"

    int* c = malloc(n * sizeof(int));
    int counter = 0;

    //compare

    for (int i = 0; i < n; i++)
    {
        int identical_counter = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                identical_counter++;
            }
        }
        if (identical_counter == 0)
        {
            c[counter] = a[i];
            counter++;
        }
    }

    //print

    printf("\n");
    printf("A/B = { ");
    for (int i = 0; i < counter; i++)
    {
        printf("%i ", c[i]);
    }
    printf("}");
    printf("\n");
    printf("\n");

    //free c

    free(c);
    return;
}

//hop function

void hop (int* a, int* b, int sum, int n , int m)
{
    int* c = malloc(sum * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }

    // keep track of pointer array of c
    int counter = n;

    for (int i = 0; i < m ; i++) // b
    {
        int identical_counter = 0;

        for (int j = 0; j < n; j++) //a
        {
            if (b[i] == a[j])
            {
                identical_counter++;
            }
        }

        if (identical_counter == 0)
        {
            c[counter] = b[i];
            counter++;
        }
    }

    printf("\n");
    printf("A ∪ B = { ");
    for (int i = 0; i < counter; i++)
    {
        printf("%i ",c[i]);
    }
    printf("}");
    printf("\n");
    printf("\n");

    free(c);
    return;
}

//giao function

void giao(int* a, int* b, int sum, int n, int m)
{
    //allocate memory for the "giao"

    int* c= malloc(sum * sizeof(int));

    //keep track of the index of elements in c

    int counter = 0;

    //compare

    for (int i = 0; i < n; i++)
    {
        int identical_counter = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                identical_counter++;
            }
        }
        if (identical_counter > 0)
        {
            c[counter] = a[i];
            counter++;
        }
    }

    //print

    printf("\n");
    printf("A ∩ B = { ");
    for (int i = 0; i < counter; i++)
    {
        printf("%i ", c[i]);
    }
    printf("}");
    printf("\n");
    printf("\n");

    //free c
    free(c);

    return;
}
