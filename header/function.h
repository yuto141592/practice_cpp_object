#include <iostream>
#include <string>
#include <unordered_map>
#include "object.h"

void Student::show() {
    std::cout << u8"名前：" << name << std::endl;
    std::cout << u8"年齢：" << age << std::endl;
}

void Student::setNum(int n) {
    num = n;
}

void Student::setName(std::string na) {
    name = na;
}

void Student::setAge(int ag) {
    age = ag;
}

int Student::getNum() {
    return num;
}

std::string Student::getName() {
    return name;
}

int Student::getAge() {
    return age;
}

Student::Student() {
    setNum(0);
    setName("");
    setAge(0);
}

Student::Student(int n, std::string na, int ag) {
    setNum(n);
    setName(na);
    setAge(ag);
}

// Student::~Student() {
//     std::cout << std::endl;
// }

void Teacher::setCareer(int ca) {
    career = ca;
}

int Teacher::getCareer() {
    return career;
}

Teacher::Teacher() {
    setNum(0);
    setName("");
    setAge(0);
    setCareer(0);
}

Teacher::Teacher(int n, std::string na, int ag, int ca) {
    setNum(n);
    setName(na);
    setAge(ag);
    setCareer(ca);
}

// Teacher::~Teacher() {
//     std::cout << std::endl;
// }

void flip_age(Student *p, int n) {
    (*p).age = n;
}

