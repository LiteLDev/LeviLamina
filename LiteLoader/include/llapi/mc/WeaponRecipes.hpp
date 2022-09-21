/**
 * @file  MC/WeaponRecipes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WeaponRecipes.
 *
 */
class WeaponRecipes {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAPONRECIPES
public:
    class WeaponRecipes& operator=(class WeaponRecipes const &) = delete;
    WeaponRecipes(class WeaponRecipes const &) = delete;
    WeaponRecipes() = delete;
#endif

public:
    /**
     * @hash   1281826186
     * @symbol ?addRecipes@WeaponRecipes@@SAXAEAVRecipes@@@Z
     */
    MCAPI static void addRecipes(class Recipes &);

};