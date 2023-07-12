/**
 * @file  DesiredMoveDirectionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DesiredMoveDirectionSystem.
 *
 */
class DesiredMoveDirectionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESIREDMOVEDIRECTIONSYSTEM
public:
    class DesiredMoveDirectionSystem& operator=(class DesiredMoveDirectionSystem const &) = delete;
    DesiredMoveDirectionSystem(class DesiredMoveDirectionSystem const &) = delete;
    DesiredMoveDirectionSystem() = delete;
#endif

public:
    /**
     * @symbol ?createDesiredMoveDirectionSystem\@DesiredMoveDirectionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createDesiredMoveDirectionSystem();

};
