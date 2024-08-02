#include <iostream>
#include <unordered_map>

struct Students {
    std::unordered_map<std::string, int> ages = {
        {"Alice", 18},
        {"Bob", 20},
        {"Taro", 12},
        {"Jiro", 9},
        {"Tanaka", 22}
    };

    std::unordered_map<int, std::string> persons = {
        {0, "Alice"},
        {1, "Bob"},
        {2, "Taro"},
        {3, "Jiro"},
        {4, "Tanaka"}
    };
};

struct Teachers {
    std::unordered_map<std::string, int> ages = {
        {"Yamada", 27},
        {"Sato", 23},
        {"Yoshida", 35},
        {"Yamamoto", 60},
        {"Takahashi", 25}
    };

    std::unordered_map<int, std::string> persons = {
        {0, "Yamada"},
        {1, "Sato"},
        {2, "Yoshida"},
        {3, "Yamamoto"},
        {4, "Takahashi"}
    };
};
