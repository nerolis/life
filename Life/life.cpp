#include "life.hpp"
#include <vector>
#include <iostream>

int Character::GenerateLifeTime() {
    srand(time(NULL));
    lifetime = rand() % 100 + 23;
    return lifetime;
};


void Character::WriteYear(int currentYear) {
    year = currentYear;
};

int Character::GetCurrentYear() { 
    return year;
};

int Character::GetLifetime() {
    return lifetime;
};

void Character::LearnSkill(std::string skill) {
    Skills.push_back(skill);
    std::cout << "Learned: " << skill << std::endl;
};

void Character::GetSkills() {
    std::cout << "Skills: " << std::endl;
    for (int i = 0; i < Skills.size(); i++) {
        std::cout << Skills[i] << std::endl;
    }
}

void Character::UnlearnSkill(std::string skill) {
    std::string deleted;
    std::vector<std::string>::size_type i = 0;
    while ( i < Skills.size() ) {
        if (Skills[i] == skill) {
            deleted = Skills[i];
            Skills.erase(Skills.begin() + i);
        } else {
            ++i;
        }
    }
    std::cout << "Unlearned: " << deleted << std::endl;
};

void Character::AddStatus() { 
    <#code#>;
}


void Character::RemoveStatus() { 
    <#code#>;
}


void Character::GetStatus() { 
    <#code#>;
}








