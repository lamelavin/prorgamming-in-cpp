#include <iostream>

using namespace std;

class Student {
    protected:
        int roll_number;
    public:
        void setRollNumber(int);
        void getRollNumber(void);
};

void Student :: setRollNumber(int roll) {
    roll_number = roll;
}

void Student :: getRollNumber(void) {
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student {
    protected:
        float maths;
        float physics;
    public:
        void setMarks(float, float);
        void getMarks(void);
};

void Exam :: setMarks(float m, float p) {
    maths = m;
    physics = p;
}

void Exam :: getMarks(void) {
    cout << "The marks in maths are " << maths << endl
    << "The marks in physics are " << physics << endl;
}

class Result : public Exam {
    float percentage;
    public:
        void display_results(void) {
            getRollNumber();
            getMarks();
            cout << "Your percentage is " << (maths + physics) / 2 << endl;
        }
};

int main() {
    /*
        Notes:
            If we are inheriting B from A and C from B: [ A --> B --> C ]
            1. A is the base class for B and B is the base class for C.
            2. ABC is called Inheritance Path
    */
    Result lavin;
    lavin.setRollNumber(101);
    lavin.setMarks(90.0f, 95.0f);
    lavin.display_results();
    return 0;
}