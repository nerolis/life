#include <string>

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
};
