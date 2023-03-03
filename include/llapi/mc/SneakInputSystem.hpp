/**
 * @file  SneakInputSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SneakInputSystem.
 *
 */
class SneakInputSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNEAKINPUTSYSTEM
public:
    class SneakInputSystem& operator=(class SneakInputSystem const &) = delete;
    SneakInputSystem(class SneakInputSystem const &) = delete;
    SneakInputSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSneakInputSystem\@SneakInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSneakInputSystem();

};