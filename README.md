# C Programming Assignment

This folder contains beginner-level C programs for the assignment questions.

## 1. Student Details
Write a C program to input and display a student's roll number, age, and marks using scanf() and printf().

## 2. Basic Arithmetic
Write a C program to input two integers and display their sum, difference, product, and quotient.

## 3. Formatted Marks
Write a C program to input marks in five subjects and display the total and percentage. Display the percentage up to 2 decimal places.

## 4. Area of Circle
Write a C program to input the radius of a circle and calculate and display its area and circumference. Display the results up to 2 decimal places.

## 5. Temperature Conversion
Write a C program to input temperature in Celsius and convert it into Fahrenheit. Display the answer up to 2 decimal places.

## 6. Formatted Integer Output
Write a C program to input an integer and display it using the following formats:
- %d
- %5d
- %10d

## 7. Formatted Floating-Point Output
Write a C program to input a floating-point number and display it using:
- %f
- %.2f
- %10.2f
- %010.2f

Observe how field width, decimal places, and zero padding affect the output.

## 8. Simple Bill
Write a C program to input the price and quantity of three products. Calculate the total amount for each product and display the final bill up to 2 decimal places.

## 9. Student Information in Formatted Output
Write a C program to input the roll number, name, and marks of a student and display the information in a properly formatted output using appropriate format specifiers and field widths.

## 10. Predict and Verify the Output
Consider the following statements:

int a = 25;
float b = 12.5678;
printf("%d\n", a);
printf("%5d\n", a);
printf("%f\n", b);
printf("%.2f\n", b);
printf("%10.2f\n", b);
printf("%010.2f\n", b);

(a) Write the complete C program.
(b) Predict the output before executing the program.
(c) Run the program and compare your predicted output with the actual output.
(d) Explain the purpose of each format specifier.

## 11. Even or Odd
Write a C program to input an integer and check whether the number is even or odd using if-else.

## 12. Positive, Negative or Zero
Write a C program to input a number. Using nested if, determine whether the number is positive, negative, or zero.

## 13. Largest of Two Numbers
Write a C program to input two numbers and find the larger number using if-else.

## 14. Largest of Three Numbers
Write a C program to input three numbers and find the largest number using nested if-else. Do not use an if-else-if ladder.

## 15. Voting Eligibility
Write a C program to input a person's age. If the age is 18 or above, display "eligible"; otherwise display "not eligible".

## 16. Pass or Fail
Write a C program to input the marks of a student. If marks are 40 or above, display "pass"; otherwise display "fail".

## 17. Divisibility Check
Write a C program to input a number and check whether it is divisible by both 5 and 10 using an appropriate condition.

## 18. Three-Level Result using Nested if
Write a C program to input a student's marks.
- If marks are greater than or equal to 40, check whether marks are greater than or equal to 75.
- Display "passed with distinction" if applicable.
- Otherwise display "passed".
- If marks are below 40, display "failed".
- Use nested if-else. Do not use an if-else-if ladder.

## 19. Simple Calculator using Nested if
Write a C program to input two numbers and a choice (1 for addition, 2 for subtraction, 3 for multiplication). Use if-else and nested if statements to perform the selected operation.
Do not use switch-case.

## 20. Number Comparison
Write a C program to input two integers.
- If both numbers are equal, display "both are equal".
- Otherwise, determine which number is greater using if-else.

## 21. Predict the Output
int a = 10, b = 20;
if (a > b)
    printf("a is greater");
else
    printf("b is greater");

Tasks:
(a) Predict the output without executing the program.
(b) Execute the program.
(c) Explain why the if statement is written inside the else.
(d) Modify the values of a and b and test all possible cases.

---

## Program Files
The C source files in this folder are named like q1_student_details.c, q2_basic_arithmetic.c, etc., according to each question.

## Compile and Run
You can compile any file with:

```bash
gcc q1_student_details.c -o q1_student_details
./q1_student_details
```

Replace the file name with the one you want to run.
