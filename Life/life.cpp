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
    for (int i = 0; i < Skills.size(); i++) {
        if (Skills[i] == skill) {
            deleted = Skills[i];
            Skills.erase(Skills.begin() + i);
            break;
        }
    }
    std::cout << "Unlearned: " << deleted << std::endl;
};

void Character::AddStatus(std::string status) {
    Statuses.push_back(status);
    std::cout << "Affected by: " << status << std::endl;
}


void Character::RemoveStatus(std::string status) {
    std::string removed;
    for (int i = 0; i < Statuses.size(); i++) {
        if (Statuses[i] == status) {
            removed = Statuses[i];
            Statuses.erase(Statuses.begin() + i);
            break;
        }
    }
    std::cout << "Status removed: " << removed << std::endl;
}


void Character::GetStatus() { 
    std::cout << "Statuses: " << std::endl;
    for (int i = 0; i < Statuses.size(); i++) {
        std::cout << Statuses[i] << std::endl;
    }
}








