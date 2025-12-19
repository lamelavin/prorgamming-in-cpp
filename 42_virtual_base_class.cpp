#include <iostream>

using namespace std;

// Student --> Test
// Student --> Sports
// Test --> Result <-- Sports

class Student {
    protected:
        int roll_number;
    public:
        void setNumber(int a) {
            roll_number = a;
        }
        void printNumber(void) {
            cout << "Your roll number is " << roll_number << endl;
        }
};

class Test : virtual public Student {
    protected:
        float maths, physics;
    public:
        void setMarks(int m, int p) {
            maths = m;
            physics = p;
        }
        void printMarks(void) {
            cout << "Your result is : " << endl
            << "Maths : " << maths << endl 
            << "Physics : " << physics << endl;
        }
};

class Sports : virtual public Student {
    protected:
        float score;
    public:
        void setScore(int s) {
            score = s;
        }
        void printScore(void) {
            cout << "Your score is " << score << endl;
        }
};

class Result : public Test, public Sports {
    private:
        float total;
    public:
        void display(void) {
            total = maths + physics + score;
            printNumber();
            printMarks();
            printScore();
            cout << "Your Total score is " << total << endl;
        }
};

int main() {
    Result lavin;
    lavin.setNumber(101);
    lavin.setMarks(90, 95);
    lavin.setScore(96);
    lavin.display();
    return 0;
}