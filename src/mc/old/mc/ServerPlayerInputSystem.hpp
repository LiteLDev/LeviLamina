/**
 * @file  ServerPlayerInputSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerPlayerInputSystem.
 *
 */
class ServerPlayerInputSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYERINPUTSYSTEM
public:
    class ServerPlayerInputSystem& operator=(class ServerPlayerInputSystem const &) = delete;
    ServerPlayerInputSystem(class ServerPlayerInputSystem const &) = delete;
    ServerPlayerInputSystem() = delete;
#endif

public:
    /**
     * @symbol  ?create\@ServerPlayerInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};