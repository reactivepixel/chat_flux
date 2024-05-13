// BaseCharacter.cpp
#include "BaseCharacter.h"

BaseCharacter::BaseCharacter(float initAtkSpd, float initHp, float initAtk, float initDefPhysical,
                             float initDefMagic, float initCrit, float initEnergyRegen, float initHaste,
                             float initPenPhysical, float initPenMagic, float initExecution)
    : atk_spd(initAtkSpd), hp(initHp), atk(initAtk), def_physical(initDefPhysical),
      def_magic(initDefMagic), crit(initCrit), energy_regen(initEnergyRegen),
      haste(initHaste), pen_physical(initPenPhysical), pen_magic(initPenMagic), execution(initExecution) {}

int main()
{
    // Create an instance of BaseCharacter
    BaseCharacter character(1.0, 100.0, 15.0, 10.0, 8.0, 5.0, 3.0, 2.0, 4.0, 6.0, 0.5);

    // Get and print all attributes
    std::string attributes = character.getAllAttributes();
    std::cout << attributes << std::endl;

    return 0;
}
