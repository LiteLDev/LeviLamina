/**
 * @file  ClientInputUpdateSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientInputUpdateSystem.
 *
 */
class ClientInputUpdateSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTINPUTUPDATESYSTEM
public:
    class ClientInputUpdateSystem& operator=(class ClientInputUpdateSystem const &) = delete;
    ClientInputUpdateSystem(class ClientInputUpdateSystem const &) = delete;
    ClientInputUpdateSystem() = delete;
#endif

public:
    /**
     * @symbol  ?create\@ClientInputUpdateSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};