/**
 * @file  RefreshAABBSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RefreshAABBSystem.
 *
 */
class RefreshAABBSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REFRESHAABBSYSTEM
public:
    class RefreshAABBSystem& operator=(class RefreshAABBSystem const &) = delete;
    RefreshAABBSystem(class RefreshAABBSystem const &) = delete;
    RefreshAABBSystem() = delete;
#endif

public:
    /**
     * @hash   1989929576
     * @symbol  ?createRefreshAABBSystem\@RefreshAABBSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createRefreshAABBSystem();
    /**
     * @hash   1797408431
     * @symbol  ?refreshAABB\@RefreshAABBSystem\@\@SA?AVAABB\@\@MAEBVVec3\@\@AEBVVec2\@\@1\@Z
     */
    MCAPI static class AABB refreshAABB(float, class Vec3 const &, class Vec2 const &, class Vec2 const &);

};