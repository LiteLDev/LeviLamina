/**
 * @file  BoatPaddleInputSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BoatPaddleInputSystem.
 *
 */
class BoatPaddleInputSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOATPADDLEINPUTSYSTEM
public:
    class BoatPaddleInputSystem& operator=(class BoatPaddleInputSystem const &) = delete;
    BoatPaddleInputSystem(class BoatPaddleInputSystem const &) = delete;
    BoatPaddleInputSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createBoatPaddleInputSystemClient\@BoatPaddleInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createBoatPaddleInputSystemClient();

};