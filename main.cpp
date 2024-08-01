#include <iostream>
#include <string>
#include <unordered_map>
#include "object.h"
#include "function.h"
#include "data.h"

int main() {
    Student array[5];
    Student* p;
    
    Teacher Yamada(0, "Yamada", 27, 4);
    Teacher* q;

    q = &Yamada;
    (*q).show();
    std::cout << "E—ðF" << Yamada.getCareer() << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < 5; i++) {
        p = &array[i];
        *p = Student(i, persons[i], ages[persons[i]]);
    }
    
    // for (int i = 0; i < 5; i++) {
    //     p = &array[i];
    //     (*p).setName(persons[i]);
    //     (*p).setNum(i);
    //     (*p).age = ages[persons[i]];
    // }

    p = &array[0];
    flip_age(p, 19);
    
    for (int i = 0; i < 5; i++) {
        p = &array[i];
        flip_age(p, (*p).age + 1);
    }

    for (int i = 0; i < 5; i++) {
        p = &array[i];
        (*p).show();
        std::cout << std::endl;
    }
    

    return 0;
};

