/**
 * @file  ControlledByLocalInstanceSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ControlledByLocalInstanceSystem.
 *
 */
class ControlledByLocalInstanceSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTROLLEDBYLOCALINSTANCESYSTEM
public:
    class ControlledByLocalInstanceSystem& operator=(class ControlledByLocalInstanceSystem const &) = delete;
    ControlledByLocalInstanceSystem(class ControlledByLocalInstanceSystem const &) = delete;
    ControlledByLocalInstanceSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createCalculateControlledByLocalInstanceSystem\@ControlledByLocalInstanceSystem\@\@SA?AUTickingSystemWithInfo\@\@AEBUConfig\@1\@\@Z
     */
    MCAPI static struct TickingSystemWithInfo createCalculateControlledByLocalInstanceSystem(struct ControlledByLocalInstanceSystem::Config const &);
    /**
     * @symbol  ?createWasControlledByLocalInstanceSystem\@ControlledByLocalInstanceSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createWasControlledByLocalInstanceSystem();

};