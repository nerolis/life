#include <string>
#include <vector>
#include <iostream>

class Character {
public:
    int GenerateLifeTime();
    int GetLifetime();
    void WriteYear(int currentYear);
    int GetCurrentYear();

private:
    int lifetime;
    int year;

    bool isAlive;

    std::vector<std::string> skills = {};

    std::string status;
};
