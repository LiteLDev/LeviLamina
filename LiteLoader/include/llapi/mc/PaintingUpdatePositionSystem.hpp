/**
 * @file  PaintingUpdatePositionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PaintingUpdatePositionSystem.
 *
 */
class PaintingUpdatePositionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PAINTINGUPDATEPOSITIONSYSTEM
public:
    class PaintingUpdatePositionSystem& operator=(class PaintingUpdatePositionSystem const &) = delete;
    PaintingUpdatePositionSystem(class PaintingUpdatePositionSystem const &) = delete;
    PaintingUpdatePositionSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createPaintingUpdatePositionSystem\@PaintingUpdatePositionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPaintingUpdatePositionSystem();

};