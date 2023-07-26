/**
 * @file  ShulkerUpdatePositionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ShulkerUpdatePositionSystem.
 *
 */
class ShulkerUpdatePositionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERUPDATEPOSITIONSYSTEM
public:
    class ShulkerUpdatePositionSystem& operator=(class ShulkerUpdatePositionSystem const &) = delete;
    ShulkerUpdatePositionSystem(class ShulkerUpdatePositionSystem const &) = delete;
    ShulkerUpdatePositionSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createShulkerUpdatePositionSystem\@ShulkerUpdatePositionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createShulkerUpdatePositionSystem();

};