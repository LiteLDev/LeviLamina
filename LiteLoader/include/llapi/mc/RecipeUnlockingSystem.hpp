/**
 * @file  RecipeUnlockingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class RecipeUnlockingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECIPEUNLOCKINGSYSTEM
public:
    class RecipeUnlockingSystem& operator=(class RecipeUnlockingSystem const &) = delete;
    RecipeUnlockingSystem(class RecipeUnlockingSystem const &) = delete;
    RecipeUnlockingSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@RecipeUnlockingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
