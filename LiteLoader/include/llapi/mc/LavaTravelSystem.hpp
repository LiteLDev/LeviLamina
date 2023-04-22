/**
 * @file  LavaTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class LavaTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAVATRAVELSYSTEM
public:
    class LavaTravelSystem& operator=(class LavaTravelSystem const &) = delete;
    LavaTravelSystem(class LavaTravelSystem const &) = delete;
    LavaTravelSystem() = delete;
#endif

public:
    /**
     * @symbol ?createLavaTravelSystem\@LavaTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLavaTravelSystem();

};
