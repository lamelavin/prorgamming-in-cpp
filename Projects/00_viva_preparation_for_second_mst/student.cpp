#include <iostream>
#include <string>
#include "student.h"
#include <fstream>

Person :: Person(std::string n, int age) : name(n), age(age) {}

Person :: ~Person() {
    std::cout<<"Person destroyed : "<<name<<std::endl;
}

Student :: Student(std::string n, int age, int roll_number) : Person(n, age), roll(roll_number) {
    std::cout<<"Student created : "<<name<<std::endl;
}

void Student :: display(void) {
    std::cout<<"Student Name : "<<name<<", Age : "<<age<<", Roll : "<<roll<<std::endl;
}

Student :: ~Student() {
    std::cout<<"Student destroyed : "<<name<<std::endl;
}

Teacher :: Teacher(std::string n, int age, int teacher_id) : Person(n, age), id(teacher_id) {
    std::cout<<"Teacher created : "<<name<<std::endl;
}

void Teacher :: display(void) {
    std::cout<<"Teacher Name : "<<name<<", Age : "<<age<<", Teacher id : "<<id<<std::endl;
}

Teacher :: ~Teacher() {
    std::cout<<"Teacher destroyed : "<<name<<std::endl;
}

Course :: Course(std::string course_name, int course_id, int course_duration) : c_name(course_name), c_id(course_id), duration_in_years(course_duration), studentCount(0) {
    std::cout<<"Course created : "<<c_name<<std::endl;
}

void Course :: assignTeacher(Teacher* t) {
    if(t == nullptr) {
        std::cout<<"Cannot assign a null teacher "<<std::endl;
        return;
    }
    teacher = t;
    std::cout<<"Teacher "<<t->name<< " assigned to course "<<c_name<<std::endl;
}

void Course :: addStudent(Student* s) {
    if (studentCount >= MAX_STUDENTS) {
        throw std::runtime_error("Max students reached!");
    }
    students[studentCount++] = s;
    std::cout<<"Student "<<s->name<<" added to course "<<c_name<<std::endl;
}

void Course :: listStudents(void) {
    std::cout<<"Students enrolled in "<<c_name<<":\n";
    for(int i = 0; i < studentCount; i++) {
        students[i]->display();
    }
}

void Course :: displayCourse(void) {
    std::cout<<"Course Name : "<<c_name<<", ID : "<<c_id<<", Duration : "<<duration_in_years<<" years"<<std::endl;
    if(teacher) {
        std::cout<<"Taught by : ";
        teacher->display();
    } else {
        std::cout<<"No teacher assigned yet."<<std::endl;
    }
    listStudents();
}

Course :: ~Course() {
    std::cout<<"Course destroyed "<<c_name<<std::endl;
}

void saveStudent(const Student *s) {
    std::ofstream fout;
    fout.open("students.txt", std::ios::app);
    if(!fout) {
        throw std::ios_base::failure("Cannot open file!");
    }
    fout<<s->name<<" "<<s->age<<" "<<s->roll<<std::endl;
    fout.close();
}

void loadStudents(void) {
    std::ifstream fin;
    fin.open("students.txt");
    if(!fin) {
        throw std::ios_base::failure("Cannot open file!");
    }
    std::string name;
    int age, roll;
    while(fin >> name >> age >> roll) {
        Student s(name, age, roll);
        s.display();
    }
    fin.close();
}