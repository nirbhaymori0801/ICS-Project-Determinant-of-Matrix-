# Matrix Operations in C
### (Determinant | Inverse | Rank)

This project performs essential matrix operations using the C programming language.  
The user inputs a square matrix and selects one of the following operations:
1. Calculate Determinant
2. Calculate Inverse (if it exists)
3. Find Rank of the Matrix

The program is menu-driven and uses modular functions for clarity and reusability.

---

## Project Objectives
• To input a matrix using 2D arrays.  
• To compute the determinant using recursive cofactor expansion.  
• To compute the inverse only if the matrix is non-singular.  
• To determine the rank of the matrix using Gaussian Elimination.  
• To design the program in a clean and user-friendly structure.

---

## Operations Performed

| Operation   | Description                                                                 |
|------------|-----------------------------------------------------------------------------|
| Determinant | Calculated using recursive cofactor expansion.                              |
| Inverse     | Computed only if determinant ≠ 0 using adjoint matrix / determinant method. |
| Rank        | Determined by converting matrix to row-echelon form (Gaussian Elimination). |

---

## How the Code Works

### 1. Determinant Calculation
• If the matrix size is 1×1, the single value is the determinant.  
• For larger matrices, expansion is done along the first row.  
• Cofactors are generated recursively by removing row and column.  
• Each term is multiplied by (-1)^(row+column) to maintain sign.  

### 2. Inverse Calculation
• The determinant is calculated first.  
• If determinant = 0 → The matrix is singular (No inverse exists).  
• The cofactor matrix is formed and then transposed → Adjoint matrix.  
• Each element of adjoint is divided by determinant → Final inverse.  

### 3. Rank Calculation
• Gaussian Elimination converts matrix into Row-Echelon Form.  
• Row swaps are performed when needed to avoid zero pivots.  
• Rank = Number of non-zero rows after elimination.  

---

## Example 1 (Singular Matrix)

**Input:**
Enter order of matrix:
3

Enter elements of matrix:
1 2 3
4 5 6
7 8 9
**Output:**
Determinant = 0
Inverse does not exist (matrix is singular).
Rank = 2

---

## Example 2 (Invertible Matrix)

**Input:**
Enter order of matrix:
3

Enter matrix elements:
1 2 3
0 1 4
5 6 0

**Output:**
Determinant = 1

Inverse Matrix:
-24 18 5
20 -15 -4
-5 4 1

Rank = 3

---

## Example 3 (Lower Rank Matrix)

**Input:**
Enter order of matrix:
3

Enter matrix elements:
2 4 6
1 2 3
3 6 9

**Output:**
Determinant = 0
Inverse does not exist (matrix is singular).
Rank = 1

---

## Conclusion
This project demonstrates matrix determinant, inverse, and rank operations using structured C programming.  
It strengthens both mathematical understanding and modular programming skills.

