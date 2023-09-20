/**
 * @file  MobRemovePassengerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MobRemovePassengerSystem.
 *
 */
class MobRemovePassengerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBREMOVEPASSENGERSYSTEM
public:
    class MobRemovePassengerSystem& operator=(class MobRemovePassengerSystem const &) = delete;
    MobRemovePassengerSystem(class MobRemovePassengerSystem const &) = delete;
    MobRemovePassengerSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@MobRemovePassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
