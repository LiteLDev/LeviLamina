/**
 * @file  CleanUpSingleTickRemovePassengersSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class CleanUpSingleTickRemovePassengersSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLEANUPSINGLETICKREMOVEPASSENGERSSYSTEM
public:
    class CleanUpSingleTickRemovePassengersSystem& operator=(class CleanUpSingleTickRemovePassengersSystem const &) = delete;
    CleanUpSingleTickRemovePassengersSystem(class CleanUpSingleTickRemovePassengersSystem const &) = delete;
    CleanUpSingleTickRemovePassengersSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSingleTickSystem\@CleanUpSingleTickRemovePassengersSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSingleTickSystem();

};
