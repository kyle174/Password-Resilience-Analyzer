# Password Resilience Analyzer

**Author:** Kyle Andrade  
**Last Modified:** 2024/01/23

## Overview

The **Password Resilience Analyzer** evaluates password strength against various security guidelines, helping both individuals and organizations assess their passwords' resilience to brute-force and sophisticated attacks.
In today's digital world, a strong password is crucial for protecting sensitive information from unauthorized access. Beyond length and complexity, password strength involves several factors:
- **Diverse Character Sets:** Using a mix of uppercase, lowercase, digits, and special characters.
- **Length:** Passwords should be at least 12 characters long.
- **Avoid Predictable Patterns:** Steering clear of common sequences or easily guessable information.

## Features

- **Main Menu:**
  - **Test a New Password:** Assess the strength of a new password.
  - **View Last Password Strength:** Review the strength of the last tested password.
  - **Exit:** Close the program.

- **Strength Assessment Criteria:**
  - Presence of lowercase and uppercase letters
  - Inclusion of numerical digits
  - Presence of special characters
  - Password length (12+ characters)

- **Function-Based Implementation:** Modular code with dedicated functions for each criterion.

- **Strength Scoring:**
  - Passwords receive a score from 0 (weakest) to 5 (strongest).
  - Categorization: Passwords are classified as "Weak," "Moderate," or "Strong."

## Getting Started

1. Clone this repository to your local machine.
2. Compile the C code using your preferred C compiler.
3. Run the executable to start the Password Resilience Analyzer.

## Usage

- **Test a New Password:** Enter a password to evaluate its strength.
- **View Strength of Last Tested Password:** Check the rating of the previously assessed password.
- **Exit:** Close the application.
