/**
 * @file  InsideCactusBlockSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InsideCactusBlockSystem.
 *
 */
class InsideCactusBlockSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDECACTUSBLOCKSYSTEM
public:
    class InsideCactusBlockSystem& operator=(class InsideCactusBlockSystem const &) = delete;
    InsideCactusBlockSystem(class InsideCactusBlockSystem const &) = delete;
    InsideCactusBlockSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@InsideCactusBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};