#include <iostream>
#include "student.h"

int main() {
    Teacher t1("Ms. Sharma", 40, 101);
    Teacher t2("Mr. John", 29, 102);

    Student s1("Lavin", 20, 1), s2("Rohan", 19, 2), s3("Priya", 21, 3);

    Course c1("CS", 501, 4);
    Course c2("AI-ML", 502, 5);

    c1.assignTeacher(&t1);
    c2.assignTeacher(&t2);

    try {
        c1.addStudent(&s1);
    } catch (std::runtime_error& e) {
        std::cout<<e.what()<<std::endl;
    }
    try {
        saveStudent(&s1);
    } catch (std::ios_base::failure& e) {
        std::cout<<"Error "<<e.what()<<std::endl;
    }
    try {
        c1.addStudent(&s2);
    } catch (std::runtime_error& e) {
        std::cout<<e.what()<<std::endl;
    }
    try {
        saveStudent(&s2);
    } catch (std::ios_base::failure& e) {
        std::cout<<"Error "<<e.what()<<std::endl;
    }
    try {
        c2.addStudent(&s3);
    } catch (std::runtime_error& e) {
        std::cout<<e.what()<<std::endl;
    }
    try {
        saveStudent(&s3);
    } catch (std::ios_base::failure& e) {
        std::cout<<"Error "<<e.what()<<std::endl;
    }
    

    c1.displayCourse();
    c2.displayCourse();

    return 0;
}