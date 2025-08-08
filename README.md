# 🎓 CGPA Calculator (Upto 6 Semesters) - AIML Department

> **A C++ CLI tool for SGPA & CGPA calculation, tailored for AIML students at Sri Shakthi Institute of Engineering and Technology (SIET).**

---

## ✨ Features

- **SGPA & CGPA calculation** up to Semester 6
- **Predefined static subject list** for each semester (AIML department specific)
- **Standard 10-point grading scale** (`O`, `A+`, `A`, `B+`, `B`, `C`, `U`)
- **Arrears handled** (`U` for uncleared subjects)
- **Detailed console prompts** for each subject
- **Cumulative GPA tracking** across all 6 semesters

---

## 🛠️ Built With

- **C++**
- **STL (Standard Template Library)**
- **Terminal/Command-line interface**

---

## 🚀 Getting Started

```bash
# Clone the repository
git clone https://github.com/Deepak-Kanesh-T/CGPA-Calculator.git
cd CGPA-Calculator

# Compile the code
g++ -o cgpa_calculator main.cpp

# Run the executable
./cgpa_calculator
```

---

## 🎓 Grade Scale

| Grade | Grade Points |
|-------|:------------:|
| O     |     10       |
| A+    |     9        |
| A     |     8        |
| B+    |     7        |
| B     |     6        |
| C     |     5        |
| U     |     0 (Fail) |

---

## 📍 Project Scope

- **Department-specific:** Subjects and credits are hardcoded for AIML at SIET.
- **Not for general use.**

### ⚠️ Known Limitations

- Static subject and credit structure
- Input validation for invalid grades not implemented yet
- Supports up to 6 semesters only

---

## 🙋 Developed By

**Deepak T**  
Final Year - AIML Department  
Sri Shakthi Institute of Engineering and Technology

---

## 💡 Future Improvements

- Add support for semesters 7 & 8
- Add file input/output or result saving
- Convert to GUI or Web-based interface (Qt, React, Flask)

---

## 🖥️ Sample Output

<details>
<summary>Click to expand sample run</summary>

```
 __________________________ WELCOME To FINAL YEAR AIML STUDENT CGPA CALCULATOR Of SIET ___________________________

Upto Sem6 is updated in the server
Note Only Grades are allowed for each input
 Example(Values Allowed): O, A+, A ,B, B+, C, U

Instructions :
    1. Kindly Enter the Correct Grades Where the Subject order is changing for Sem3 !!!
    2. If you had or having Arrear and cleared means mention the PASS grade  else give U denotes Present Arrear 

 _______________________________  Semester-I  __________________________________

Enter Grade for " DIGITAL PRINCIPLES AND SYSTEM DESIGN LABORATORY ": A+
...
 ********** Current CGPA :  7.93

 ______________________ RESULTS OF Semester- 1 _____________________

...
 ********** Current CGPA :  8.34

 ______________________ RESULTS OF Semester- 6 _____________________

  ________  THANK YOU FOR BEING A VALUABLE STUDENT IN OUR COLLEGE__________

_______________________________________________________________Developed by  Your Friend!!!!
```
</details>

---

> _For suggestions or contributions, feel free to open an issue or pull request!_

