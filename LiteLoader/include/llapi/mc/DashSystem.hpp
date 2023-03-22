/**
 * @file  DashSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DashSystem.
 *
 */
class DashSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DASHSYSTEM
public:
    class DashSystem& operator=(class DashSystem const &) = delete;
    DashSystem(class DashSystem const &) = delete;
    DashSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@DashSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
