#include <stdio.h>
#include <string.h>


#define size 20
#define MAX_NAME_LENGTH 100


void bubbleSort(char names[][MAX_NAME_LENGTH], int n, int ascemding);
void swap(char *xp, char *yp);

/**
 * Main function
 * 
 * Returns: 0 on success
 */

int main()
{
    char names[size][MAX_NAME_LENGTH] = {
        "Joshua Alana", "Chinwe Oka", "Chukwudi Oka", "Chinwe Ifexhukwu",
        "Joshua Oka", "Chukwudi Godsfavour", "King David", "Chinwe John",
        "Divine Iheanacho", "Aaron Izang", "Izuchukwu Ola", "Sunday Izu",
        "Kamsi Ishimwe", "Isaac Olu", "Frida Gates", "Perculiar Jonson",
        "Okeke Fiona", "Ishimwe Divine", "Festus Kingsley", "Stephen Adebayo"
    };

    char order[10];
    int ascemding;

    printf("Enter the order of sorting (asc or desc): ");
    scanf("%s", order);

    if (strcmp(order, "asc") == 0)
    {
        ascemding = 1;
    }
    else if (strcmp(order, "desc") == 0)
    {
        ascemding = 0;
    }
    else
    {
        printf("Invalid order\n");
        return 1;
    }

    bubbleSort(names, size, ascemding);

    printf("Sorted names:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;

}

void swap(char *xp, char *yp)
{
    char temp[MAX_NAME_LENGTH];
    strcpy(temp, xp);
    strcpy(xp, yp);
    strcpy(yp, temp);
}

/**
 * Bubble sort algorithm
 * 
 * @param names: array of names to be sorted
 * @param n: number of names in the array
 * @param ascemding: 1 for ascending order, 0 for descending order
 */
void bubbleSort(char names[][MAX_NAME_LENGTH], int n, int ascemding)
{
    int swapped;
    char temp[MAX_NAME_LENGTH];

    for (int i = 0; i < n - 1; i++)
    {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if ((ascemding && strcmp(names[j], names[j + 1]) > 0) || (!ascemding && strcmp(names[j], names[j + 1]) < 0))
            {
                swap(names[j], names[j + 1]);
                swapped = 1;
            }
        }
        if  (!swapped)
        {
            break;
        }
    }
}


