#include <string>

class Character {
public:
    int GenerateLifeTime();
    void WriteYear(int currentYear);
    int GetCurrentYear();

private:
    int lifetime;
    int year;
};
