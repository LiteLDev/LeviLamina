/**
 * @file  RemovePassengersSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RemovePassengersSystem.
 *
 */
class RemovePassengersSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEPASSENGERSSYSTEM
public:
    class RemovePassengersSystem& operator=(class RemovePassengersSystem const &) = delete;
    RemovePassengersSystem(class RemovePassengersSystem const &) = delete;
    RemovePassengersSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createRemovePassengersSystem\@RemovePassengersSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createRemovePassengersSystem();

};