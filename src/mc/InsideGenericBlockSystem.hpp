/**
 * @file  InsideGenericBlockSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InsideGenericBlockSystem.
 *
 */
class InsideGenericBlockSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEGENERICBLOCKSYSTEM
public:
    class InsideGenericBlockSystem& operator=(class InsideGenericBlockSystem const &) = delete;
    InsideGenericBlockSystem(class InsideGenericBlockSystem const &) = delete;
    InsideGenericBlockSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@InsideGenericBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};