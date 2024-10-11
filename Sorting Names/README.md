# Name Sorting Program Using Bubble Sort

## Description
This program sorts a list of 20 full names using the **Bubble Sort** algorithm. The user is prompted to choose between sorting the names in **ascending** or **descending** order. Based on the user's input, the program performs the sorting and prints the names in the chosen order.

The program demonstrates basic string manipulation in C, use of bubble sort, and dynamic ordering based on user input.

## Features
- Allows the user to select the sorting order: 
  - **asc** for ascending order
  - **desc** for descending order
- Uses the **Bubble Sort** algorithm for sorting the names.
- Implements a string swap function to assist in sorting.
  
## Files
- **main.c**: The main source file that contains the list of names and the logic for sorting and printing.
- **README.md**: The documentation file explaining the program.

## How to Use
1. Clone the repository or download the `sorting_names.c` file.
2. Compile the program using a C compiler (e.g., `gcc`):
   ```
   gcc sorting_names.c -o sorting_names
   ```
3. Run the executable:
    ```
    ./sort_names
    ```
4. When prompted, enter asc for sorting the names in ascending order or desc for sorting the names in descending order.
    
    Example:
    ```
    Enter 'asc' for ascending or 'desc' for descending: asc
    ```
5. The program will display the sorted list of names.

    For ascending order (asc):

    ```
    Enter 'asc' for ascending or 'desc' for descending: asc
    
    Sorted names:
    Aaron Izang
    Chinwe Ifexhukwu
    Chinwe John
    Chinwe Oka
    Chukwudi Godsfavour
    Chukwudi Oka
    Divine Iheanacho
    Festus Kingsley
    Frida Gates
    ...
    ```
    For descending order (desc):

    ```
    Enter 'asc' for ascending or 'desc' for descending: desc

    Sorted names:
    Sunday Izu
    Stephen Adebayo
    Perculiar Jonson
    Okeke Fiona
    King David
    Kamsi Ishimwe
    Joshua Oka
    Joshua Alana
    Izuchukwu Ola
    Ishimwe Divine
    ...
    ```
