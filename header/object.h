#ifndef PRACTICE_H
#define PRACTICE_H


#include <string>

class Student {
    public:
        int age;
        void show();
        void setNum(int n);
        void setName(std::string na);
        void setAge(int ag);
        int getNum();
        std::string getName();
        int getAge();

        Student();
        Student(int n, std::string na, int ag);
        // ~Student();
    
    protected:
        std::string name;
        int num;
};

class Teacher : public Student {
    public:
        void setCareer(int ca);
        int getCareer();

        Teacher();
        Teacher(int n, std::string na, int ag, int ca);
        // ~Teacher();

    private:
        int career;
};


#endif // PRACTICE_H