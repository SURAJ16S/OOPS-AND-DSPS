# 💻 OOPS and DSPS (C++)

Welcome to the comprehensive repository containing solutions and implementations for **Object-Oriented Programming Systems (OOPS)** and **Data Structures & Problem Solving (DSPS)**.

This repository demonstrates strong foundational concepts in C++ including complex data modeling, memory management, and algorithm optimization.

---

## 📂 Repository Structure

The files have been strictly categorized into two main domains:

### 1. 🏛️ Object-Oriented Programming (`/1_OOPS_Assignments`)
This directory contains modular C++ programs showcasing Encapsulation, Inheritance, Polymorphism, Abstraction, and Exception Handling.
- **Management Systems**:
  - `OOPS-ASSIGNMENT-1-BankSystem.cpp`: Simulates real-world banking operations (Deposits, Withdrawals, Balance tracking).
  - `OOPS-ASSIGNMENT-2-BOOKSHOP.cpp`: A dynamic bookstore inventory manager.
  - `OOPS_-Assignment-5_Hospital.cpp`: Patient and doctor record system utilizing classes and arrays of objects.
  - `Personal_information_system.cpp`: Demonstrating complex data encapsulation.
- **Academic Systems**:
  - `OOPS-Assignment-4_RESULT.cpp` & `CPP-RESULT.cpp`: Grading systems calculating and displaying student results based on class properties.
- **Core C++ Mechanics**:
  - `OOPS-ASSIGNMENT-3_Complex_Number.cpp`: Demonstrating robust **Operator Overloading** to perform arithmetic on complex/imaginary numbers.
  - `OOPS_Assignment-6_television.cpp`: Exception handling (`try/catch`) implementation based on physical TV conditions.
  - `OOPS_Assignment-7_Template.cpp`: Implementation of **C++ Generics / Templates** to create data-type-agnostic functions/classes.

### 2. 🧮 Data Structures & Problem Solving (`/2_DSPS_Assignments`)
This directory contains raw algorithmic and memory-managed solutions for advanced data structures.
- **Queues**:
  - `DSPS-ASSIGNMENT-Circular-QUEUE.cpp` & `DSPS-ASSGNMENT_6-DoubleEndedQueue.cpp` (Deque).
  - `DSPS-ASSIGNMENT_7-PIZZAPARLOR.cpp`: Simulates a pizza shop order processing system using a highly optimized Circular Queue.
- **Linked Lists**:
  - `DSPS-ASSIGNMENT-10-MLS.cpp` & `DSPS-ASSIGNMENT-9-CHARITY.cpp`: Dynamic memory allocation representing donor tracking and multiple-linked structures.
- **Searching and Sorting**:
  - `DSPS-assignment1-linear_search.cpp`: Foundational searching logic.
  - `DSPS - library.cpp`: Searching and sorting structures holding library book information.
- **String Manipulation**:
  - `strOperation.cpp`: Performing native string operations (length, reverse, palindrome, substring) without relying on standard library `<string>` functions.
- **Other Algorithmic Exercises**:
  - `DSPS-Assignment_No_3.cpp`, `DSPS-Assignment_4.cpp`, `DSPS-Assignment_5.cpp`, `DSPS_ASSIGNMENT_8.cpp`: Various implementations focusing on arrays, stacks, matrices, and expression evaluations.

---

## 🚀 How to Compile and Run

Make sure you have a standard C++ compiler (like `g++` via GCC or MinGW) installed on your system.

**1. Clone the repository:**
```bash
git clone https://github.com/SURAJ16S/OOPS-AND-DSPS.git
cd OOPS-AND-DSPS
```

**2. Navigate to a topic and compile a specific file:**
```bash
cd 1_OOPS_Assignments
g++ OOPS-ASSIGNMENT-1-BankSystem.cpp -o bank
```

**3. Execute the compiled binary:**
* **Linux / Mac:**
  ```bash
  ./bank
  ```
* **Windows:**
  ```bash
  bank.exe
  ```

> *Note: Compiled binaries (`.exe`, `.o`) have been excluded from version control to maintain a clean source code repository.*
