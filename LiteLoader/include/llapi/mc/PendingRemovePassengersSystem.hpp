/**
 * @file  PendingRemovePassengersSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PendingRemovePassengersSystem.
 *
 */
class PendingRemovePassengersSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PENDINGREMOVEPASSENGERSSYSTEM
public:
    class PendingRemovePassengersSystem& operator=(class PendingRemovePassengersSystem const &) = delete;
    PendingRemovePassengersSystem(class PendingRemovePassengersSystem const &) = delete;
    PendingRemovePassengersSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createPendingRemovePassengersSystem\@PendingRemovePassengersSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPendingRemovePassengersSystem();

};