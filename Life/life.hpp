#include <string>
#include <vector>
#include <iostream>

class Character {
public:
    int GenerateLifeTime();
    int GetLifetime() const;
    int GetCurrentYear() const;

    void WriteYear(int currentYear);

    void LearnSkill(std::string skill);
    void UnlearnSkill(std::string skill);
    void GetSkills() const;

    void AddStatus(std::string status);
    void RemoveStatus(std::string status);
    void GetStatus() const;

    void SummaryLifeAndClear() ;

    void setName(std::string _name);
    void getName() const;

private:
    int lifetime;
    int year;

    bool isAlive;

    std::string name;
    std::vector<std::string> Skills;
    std::vector<std::string> Statuses;
};
