/**
 * @file  SetPreviousWalkDistSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SetPreviousWalkDistSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETPREVIOUSWALKDISTSYSTEM
public:
    class SetPreviousWalkDistSystem& operator=(class SetPreviousWalkDistSystem const &) = delete;
    SetPreviousWalkDistSystem(class SetPreviousWalkDistSystem const &) = delete;
    SetPreviousWalkDistSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@SetPreviousWalkDistSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};