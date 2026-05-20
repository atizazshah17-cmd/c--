#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_Number;

public:
    void set_roll_Number(int);
    void get_roll_Number(void);
};

void Student ::set_roll_Number(int r)
{
    roll_Number = r;
}
void Student ::get_roll_Number(void)
{
    cout << " The roll Number is " << roll_Number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_marks(void)
{
    cout << "The marks obtained in maths are " << maths << endl;
    cout << "The marks obtained in physics are " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_Number();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};

/*
Notes:
     If we are inheriting B from a and C from B  [ A ---> B ---> C ] 
     1. A is the base class for B and B is the base class for C
     2. A ---> B ---> C is called inheritance path

*/
int main()
{
    Result Atizaz;
    Atizaz.set_roll_Number(420);
    Atizaz.set_marks(94.0, 90.0);
    Atizaz.display_result();

    return 0;
}