/**
 * @file  UpdateBoundingBoxSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateBoundingBoxSystem.
 *
 */
class UpdateBoundingBoxSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEBOUNDINGBOXSYSTEM
public:
    class UpdateBoundingBoxSystem& operator=(class UpdateBoundingBoxSystem const &) = delete;
    UpdateBoundingBoxSystem(class UpdateBoundingBoxSystem const &) = delete;
    UpdateBoundingBoxSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@UpdateBoundingBoxSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};