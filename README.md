# **Group Project: Net Salary Calculator and Sorting Names**

List of Contributors
Joshua
King
Favour

## **Introduction**

This project implements two programs using C programming, designed to solve the following problems:
1. **Net Salary Calculator**: A program that computes the net salary from the gross salary based on various deductions like taxes, medical insurance, maternity leave, and social security contributions.
2. **Sorting Names**: A program that sorts a list of 20 full names either in ascending or descending order based on user input, using the bubble sort algorithm.

This project was completed collaboratively by a group of three members. Each member contributed to different aspects of the solution, as detailed in the "Group Contributions" section.

---

## **Problem 1: Net Salary Calculator**

### **Problem Description**:
The program calculates the net salary by deducting the following from the gross salary:
1. **Tax**: The tax rate varies based on the salary range:
   - 0% if the salary is ≤ USD 100.
   - 20% if the salary is > USD 100 and ≤ USD 300.
   - 28% if the salary is > USD 300.
   
2. **Medical Insurance**: 5% of the gross salary.
3. **Maternity Leave**: 0.3% of the gross salary.
4. **Social Security Fund**: 3% of the gross salary.

Each deduction is calculated in its own function, and the final net salary is computed by aggregating the results from each deduction function. All functions (except the main function) use **pointers** to pass variables by reference, improving memory efficiency and allowing for real-time manipulation of values.

### **Program Design**:
- **Functions**: 
  - Separate functions for calculating tax, medical insurance, maternity leave, and social security fund. Each function takes the gross salary as an input and returns the corresponding deduction.
  - The main function calls these individual functions to aggregate the deductions and compute the net salary.
- **Pointers**:
  - Pointers are used to manipulate variables in functions, making the program more efficient in terms of memory management.
  
### **How the Solution Works**:
1. The user inputs their **gross salary**.
2. The program calls each deduction function, passing the address of the gross salary.
3. The deductions are calculated and returned.
4. The **net salary** is computed by subtracting the total deductions from the gross salary.
5. The **net salary** is displayed to the user.

---

## **Problem 2: Sorting Names**

### **Problem Description**:
The program asks the user to enter 20 full names and whether they would like to sort the names in **ascending** or **descending** order. The sorting is done using the **bubble sort algorithm**, a simple comparison-based algorithm that repeatedly steps through the list and swaps adjacent elements if they are in the wrong order.

### **Program Design**:
- **User Input**:
  - The program prompts the user to enter 20 names and the sorting order (`asc` for ascending or `desc` for descending).
  
- **Bubble Sort Algorithm**:
  - The bubble sort algorithm iterates through the list of names multiple times.
  - For each pass, it compares adjacent names and swaps them if they are not in the desired order (either ascending or descending).
  
## **Group Contributions**

The project was collaboratively developed by three group members. Below is a breakdown of the contributions from each member:

1. **Member 1 Joshua Alana**:
   - Developed the **Net Salary Calculator**, including the implementation of deduction functions and integration with pointers to ensure efficient memory use.
   - Ensured correct input validation and calculation logic for all deductions.

2. **Member 2 Gods Favour**:
   - Implemented the **Sorting Names** program, focusing on the bubble sort algorithm and handling of arrays of strings.
   - Ensured the program handles both ascending and descending sorting orders.

3. **Member 3 King David**:
   - Assisted with debugging and testing both programs to ensure correctness and efficiency.
   - Contributed to the documentation and ensured that the program met the project's requirements.

Each member contributed to the final report and submission process.

---

## **How to Use the Programs**

### **Net Salary Calculator**
1. Clone the repository:
   ```bash
   git clone <https://github.com/Joshua-Coded/ALU_WK5_Assignment.git>
   ```
2. Navigate to the project directory and compile the program:
   ```bash
   gcc -o net_salary_calculator net_salary_calculator.c
   ```
3. Run the program:
   ```bash
   ./net_salary_calculator
   ```
4. Enter the **gross salary** when prompted. The program will display the net salary after calculating all the deductions.

### **Sorting Names**
1. Compile the program:
   ```bash
   gcc -o sorting_names sorting_names.c
   ```
2. Run the program:
   ```bash
   ./sorting_names
   ```
---
