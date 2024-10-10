i#include <stdio.h>

// Function to calculate tax based on salary range
void calculate_tax(float *gross_salary, float *tax) {
    if (*gross_salary <= 100) {
        *tax = 0;  // No tax for salary <= 100
    } else if (*gross_salary > 100 && *gross_salary <= 300) {
        *tax = 0.20 * (*gross_salary);  // 20% tax for salary between 100 and 300
    } else {
        *tax = 0.28 * (*gross_salary);  // 28% tax for salary > 300
    }
}

// Function to calculate medical insurance (5% of gross salary)
void calculate_medical_insurance(float *gross_salary, float *medical_insurance) {
    *medical_insurance = 0.05 * (*gross_salary);
}

// Function to calculate maternity leave (0.3% of gross salary)
void calculate_maternity_leave(float *gross_salary, float *maternity_leave) {
    *maternity_leave = 0.003 * (*gross_salary);
}

// Function to calculate social security fund (3% of gross salary)
void calculate_social_security(float *gross_salary, float *social_security) {
    *social_security = 0.03 * (*gross_salary);
}

// Main function to calculate net salary by aggregating all deductions
int main() {
    float gross_salary, tax, medical_insurance, maternity_leave, social_security, net_salary;

    // Ask user to input gross salary
    printf("Enter your gross salary: ");
    scanf("%f", &gross_salary);

    // Call functions to calculate each deduction
    calculate_tax(&gross_salary, &tax);
    calculate_medical_insurance(&gross_salary, &medical_insurance);
    calculate_maternity_leave(&gross_salary, &maternity_leave);
    calculate_social_security(&gross_salary, &social_security);

    // Calculate net salary by subtracting all deductions from gross salary
    net_salary = gross_salary - (tax + medical_insurance + maternity_leave + social_security);

    // Display all deductions and the net salary
    printf("\nGross Salary: %.2f\n", gross_salary);
    printf("Tax: %.2f\n", tax);
    printf("Medical Insurance: %.2f\n", medical_insurance);
    printf("Maternity Leave: %.2f\n", maternity_leave);
    printf("Social Security Fund: %.2f\n", social_security);
    printf("Net Salary: %.2f\n", net_salary);

    return 0;
}

