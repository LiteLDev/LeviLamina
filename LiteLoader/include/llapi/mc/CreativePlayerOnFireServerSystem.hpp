/**
 * @file  CreativePlayerOnFireServerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class CreativePlayerOnFireServerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVEPLAYERONFIRESERVERSYSTEM
public:
    class CreativePlayerOnFireServerSystem& operator=(class CreativePlayerOnFireServerSystem const &) = delete;
    CreativePlayerOnFireServerSystem(class CreativePlayerOnFireServerSystem const &) = delete;
    CreativePlayerOnFireServerSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@CreativePlayerOnFireServerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
