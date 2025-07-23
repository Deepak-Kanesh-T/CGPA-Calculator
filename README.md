**CGPA Calculator (Upto 5 Semesters) - AIML Department**

This is a C++ command-line application developed specifically for students of the Artificial Intelligence and Machine Learning (AIML) department at Sri Shakthi Institute of Engineering and Technology (SIET). It helps students calculate their SGPA per semester and the overall CGPA up to the 5th semester, based on a fixed subject and credit structure.

📌** Features**
•	✅ SGPA & CGPA calculation up to Semester 5
•	✅ Predefined static subject list for each semester (AIML department specific)
•	✅ Uses standard 10-point grading scale (O, A+, A, B+, B, C, U)
•	✅ Handles arrears (input 'U' for uncleared subjects)
•	✅ Detailed console prompts for each subject
•	✅ Cumulative GPA tracked throughout all 5 semesters

🛠️ Built With
    - C++
    - STL (Standard Template Library)
    - Terminal/Command-line interface
  
🚀 **How to Run**
    1. Clone the repository:
        git clone https://github.com/Deepak-Kanesh-T/CGPA-Calculator.git
        cd aiml-cgpa-calculator
    2. Compile the code:
        g++ -o cgpa_calculator main.cpp
    3. Run the executable:
        ./cgpa_calculator

**🎓 Grade Scale Used**
Grade	Grade Points
O	10
A+	9
A	8
B+	7
B	6
C	5
U	0 (Fail)

📍 **Project Scope**
This project is specifically designed for the AIML students of SIET and not intended for general use as the subjects and credits are hardcoded semester-wise.
📌 Known Limitations
•	❗ Static subject and credit structure
•	❗ Input validation for invalid grades not implemented yet
•	❗ Currently supports up to 5 semesters


🙋 **Developed By**
**Deepak T**
Final Year - AIML Department
Sri Shakthi Institute of Engineering and Technology

**📄 License**
This project is open-source and available under the MIT License. For academic/educational purposes only.
💡 Future Improvements
•	🔧 Add support for semesters 6, 7, and 8
•	🔧 Add file input/output or result saving
•	🔧 Convert to GUI or Web-based interface using Qt, React, or Flask
