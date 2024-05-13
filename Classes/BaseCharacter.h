// BaseCharacter.h
#include <iostream>
#include <sstream>
#include <string>

class BaseCharacter
{
public:
    // Constructor with initialization list for all attributes
    BaseCharacter(float initAtkSpd, float initHp, float initAtk, float initDefPhysical,
                  float initDefMagic, float initCrit, float initEnergyRegen, float initHaste,
                  float initPenPhysical, float initPenMagic, float initExecution);

    // Other member functions...
    // New method to get all attributes as a formatted string
    std::string getAllAttributes() const
    {
        std::stringstream ss;
        ss << "Attack Speed: " << atk_spd << "\n"
           << "Health Points: " << hp << "\n"
           << "Attack: " << atk << "\n"
           << "Physical Defense: " << def_physical << "\n"
           << "Magic Defense: " << def_magic << "\n"
           << "Critical Strike Chance: " << crit << "\n"
           << "Energy Regeneration: " << energy_regen << "\n"
           << "Haste: " << haste << "\n"
           << "Physical Penetration: " << pen_physical << "\n"
           << "Magic Penetration: " << pen_magic << "\n"
           << "Execution: " << execution;
        return ss.str();
    }

private:
    float atk_spd, hp, atk, def_physical, def_magic, crit, energy_regen, haste, pen_physical, pen_magic, execution;
};
