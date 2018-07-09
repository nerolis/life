#include "life.hpp"


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
}



