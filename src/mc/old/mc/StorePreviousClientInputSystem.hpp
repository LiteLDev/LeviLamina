/**
 * @file  StorePreviousClientInputSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StorePreviousClientInputSystem.
 *
 */
class StorePreviousClientInputSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOREPREVIOUSCLIENTINPUTSYSTEM
public:
    class StorePreviousClientInputSystem& operator=(class StorePreviousClientInputSystem const &) = delete;
    StorePreviousClientInputSystem(class StorePreviousClientInputSystem const &) = delete;
    StorePreviousClientInputSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createStorePreviousClientInputSystem\@StorePreviousClientInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createStorePreviousClientInputSystem();

};