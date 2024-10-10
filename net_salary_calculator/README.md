# **Net Salary Calculator**

## **Project Description**

This project implements a **Net Salary Calculator** in C programming language. The calculator takes a **gross salary** as input and applies various deductions (tax, medical insurance, maternity leave, and social security) to compute the final **net salary**.

Each deduction is calculated using a standalone function, which manipulates the gross salary using **pointers**. The deductions are aggregated to calculate the net salary, which is then displayed to the user.

---

## **How It Works**

The program calculates the following deductions based on the gross salary:

1. **Tax on Salary**:
   - No tax (0%) if the salary is ≤ USD 100.
   - 20% tax if the salary is between USD 100 and USD 300.
   - 28% tax if the salary is > USD 300.
   
2. **Medical Insurance**: 5% of the gross salary.
   
3. **Maternity Leave**: 0.3% of the gross salary.

4. **Social Security Fund**: 3% of the gross salary.

Each deduction is calculated in its own function, and the final **net salary** is computed by subtracting all the deductions from the gross salary.

---

## **Project Structure**

- `net_salary_calculator.c`: The source code implementing the net salary calculator.
- `README.md`: Project documentation (this file).

---

## **Functions Used**

1. **`calculate_tax(float *gross_salary, float *tax)`**:
   - This function calculates the tax based on the salary range and modifies the `tax` variable using pointers.
   
2. **`calculate_medical_insurance(float *gross_salary, float *medical_insurance)`**:
   - This function calculates medical insurance as 5% of the gross salary and modifies the `medical_insurance` variable using pointers.
   
3. **`calculate_maternity_leave(float *gross_salary, float *maternity_leave)`**:
   - This function calculates maternity leave as 0.3% of the gross salary and modifies the `maternity_leave` variable using pointers.
   
4. **`calculate_social_security(float *gross_salary, float *social_security)`**:
   - This function calculates social security fund as 3% of the gross salary and modifies the `social_security` variable using pointers.

---

## **How to Run the Program**

1. **Clone the repository** or download the `net_salary_calculator.c` file.

2. **Compile the C program**:
   ```bash
   gcc -o net_salary_calculator net_salary_calculator.c
   ```

3. **Run the program**:
   ```bash
   ./net_salary_calculator
   ```

4. **Input the gross salary** when prompted. The program will display the net salary after applying all the deductions.

---

## **Sample Output**

```
Enter your gross salary: 450

Gross Salary: 450.00
Tax: 126.00
Medical Insurance: 22.50
Maternity Leave: 1.35
Social Security Fund: 13.50
Net Salary: 286.65
```

---

## **Advantages of Using Pointers in This Program**

1. **Memory Efficiency**:
   - Instead of passing large variables or structures, pointers allow us to manipulate data directly in memory, which avoids the overhead of copying data.

2. **Direct Data Manipulation**:
   - Pointers allow the functions to directly modify the values of variables in memory, which simplifies the process of returning multiple values from a function.

3. **Improved Performance**:
   - Using pointers ensures that large variables are not duplicated when passed to functions, making the program more efficient in terms of both memory usage and execution time.

---

## **Conclusion**

This project demonstrates how to use **modular functions** and **pointers** in C to implement a real-world application, such as a salary calculator. By separating the logic for each deduction into its own function and utilizing pointers for efficient memory handling, the program is both modular and efficient.
