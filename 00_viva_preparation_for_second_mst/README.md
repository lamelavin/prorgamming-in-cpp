# Institute Management System (C++ OOP Project)

This project is a complete Object-Oriented Programming (OOP) implementation in C++ designed to match every topic from UNIT I to UNIT V of my sem syllabus. It is suitable for viva and practical exams.

# 📌 Project Title - Institute Management System (IMS)

# 📌 Project Objective - To create a menu-driven C++ application that manages Students, Teachers, and Courses while demonstrating all required OOP concepts including:

    Classes & Objects

    Constructors & Destructors

    Inheritance (single, multilevel, multiple)

    Function & Operator Overloading

    Pointers to base and derived classes

    Polymorphism & Virtual Functions

    Abstract Base Classes

    Friend Functions

    File Handling (read, write, modify, delete)

    Exception Handling

    UML Diagrams

# 🧱 Project Structure (Conceptual)
1. Abstract Base Class — Person

    Common attributes:

        name

        id

        age

    Pure virtual functions:

        display()

        input()

2. Derived Class — Student : public Person

    Additional attributes:

        rollNo

        branch

        marks[5]

        percentage

    Features:

        Constructor overloading

        File operations

        Operator overloading for ID match

        Friend functions

3. Derived Class — Teacher : public Person

    Attributes:

        subject

        salary

    Features:

        Virtual function overriding

        File handling

4. Multiple Inheritance — Course : public Student, public Teacher

    Attributes:

        courseName

        duration

Demonstrates multiple inheritance.

# 🧮 Menu Options (Main Program)

    1. Add Student
    2. Display Students
    3. Search Student
    4. Modify Student
    5. Delete Student
    6. Add Teacher
    7. Display Teachers
    8. Course Management
    9. Exit