/**
 * @file  ServerAnimationSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerAnimationSystem.
 *
 */
class ServerAnimationSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERANIMATIONSYSTEM
public:
    class ServerAnimationSystem& operator=(class ServerAnimationSystem const &) = delete;
    ServerAnimationSystem(class ServerAnimationSystem const &) = delete;
    ServerAnimationSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createServerAnimationSystem\@ServerAnimationSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createServerAnimationSystem();

};