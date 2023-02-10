/**
 * @file  ThrownTridentNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ThrownTridentNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THROWNTRIDENTNORMALTICKSYSTEM
public:
    class ThrownTridentNormalTickSystem& operator=(class ThrownTridentNormalTickSystem const &) = delete;
    ThrownTridentNormalTickSystem(class ThrownTridentNormalTickSystem const &) = delete;
    ThrownTridentNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@ThrownTridentNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};