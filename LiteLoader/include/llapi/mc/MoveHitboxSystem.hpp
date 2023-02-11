/**
 * @file  MoveHitboxSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveHitboxSystem.
 *
 */
class MoveHitboxSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEHITBOXSYSTEM
public:
    class MoveHitboxSystem& operator=(class MoveHitboxSystem const &) = delete;
    MoveHitboxSystem(class MoveHitboxSystem const &) = delete;
    MoveHitboxSystem() = delete;
#endif

public:
    /**
     * @hash   -2092944828
     * @symbol  ?createMoveHitboxSystem\@MoveHitboxSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createMoveHitboxSystem();
    /**
     * @hash   1384716253
     * @symbol  ?moveHitboxTo\@MoveHitboxSystem\@\@SAXAEBVVec3\@\@AEAV?$vector\@UHitbox\@\@V?$allocator\@UHitbox\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void moveHitboxTo(class Vec3 const &, std::vector<struct Hitbox> &);

};