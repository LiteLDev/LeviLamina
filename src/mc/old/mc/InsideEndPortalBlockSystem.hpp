/**
 * @file  InsideEndPortalBlockSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InsideEndPortalBlockSystem.
 *
 */
class InsideEndPortalBlockSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEENDPORTALBLOCKSYSTEM
public:
    class InsideEndPortalBlockSystem& operator=(class InsideEndPortalBlockSystem const &) = delete;
    InsideEndPortalBlockSystem(class InsideEndPortalBlockSystem const &) = delete;
    InsideEndPortalBlockSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@InsideEndPortalBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};