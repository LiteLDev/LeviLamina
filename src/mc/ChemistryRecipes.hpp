/**
 * @file  ChemistryRecipes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChemistryRecipes.
 *
 */
class ChemistryRecipes {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHEMISTRYRECIPES
public:
    class ChemistryRecipes& operator=(class ChemistryRecipes const &) = delete;
    ChemistryRecipes(class ChemistryRecipes const &) = delete;
    ChemistryRecipes() = delete;
#endif

public:
    /**
     * @symbol  ?addRecipes\@ChemistryRecipes\@\@SAXAEAVRecipes\@\@\@Z
     */
    MCAPI static void addRecipes(class Recipes &);

};