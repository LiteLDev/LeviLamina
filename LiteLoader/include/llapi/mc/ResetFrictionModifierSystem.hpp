/**
 * @file  ResetFrictionModifierSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ResetFrictionModifierSystem.
 *
 */
class ResetFrictionModifierSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESETFRICTIONMODIFIERSYSTEM
public:
    class ResetFrictionModifierSystem& operator=(class ResetFrictionModifierSystem const &) = delete;
    ResetFrictionModifierSystem(class ResetFrictionModifierSystem const &) = delete;
    ResetFrictionModifierSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@ResetFrictionModifierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
