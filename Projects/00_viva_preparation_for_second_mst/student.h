#ifndef STUDENT_H
#define STUDENT_H
#include <string>

static const int MAX_STUDENTS = 20;

class Course;

class Person {
protected:
    std::string name;
    int age;
public:
    Person(std::string, int);
    virtual void display(void) = 0;
    virtual ~Person(void);
};

class Student : public Person {
private:
    int roll;
    friend class Course;
    friend void saveStudent(const Student*);
public:
    Student(std::string, int, int);
    void display(void) override;
    ~Student();
};

class Teacher : public Person {
private:
    int id;
    // friend void Course :: assignTeacher(Teacher*);
    friend class Course;
public:
    Teacher(std::string, int, int);
    void display(void) override;
    ~Teacher();
};

class Course {
private:
    std::string c_name;
    int c_id;
    int duration_in_years;
    int studentCount = 0;

    Teacher* teacher = nullptr;
    Student* students[MAX_STUDENTS];
public:
    Course(std::string, int, int);
    void assignTeacher(Teacher*);
    void addStudent(Student*);
    void listStudents(void);
    void displayCourse(void);
    ~Course();
};

void saveStudent(const Student *s);
void loadStudents(void);

#endif