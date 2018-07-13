#include <string>
#include <vector>
#include <iostream>

class Character {
public:
    int GenerateLifeTime();
    int GetLifetime();
    int GetCurrentYear();

    void WriteYear(int currentYear);

    void LearnSkill(std::string skill);
    void UnlearnSkill(std::string skill);
    void GetSkills();

    void AddStatus(std::string status);
    void RemoveStatus(std::string status);
    void GetStatus();

    void Clear();

private:
    int lifetime;
    int year;

    bool isAlive;

    std::vector<std::string> Skills;
    std::vector<std::string> Statuses;
};
