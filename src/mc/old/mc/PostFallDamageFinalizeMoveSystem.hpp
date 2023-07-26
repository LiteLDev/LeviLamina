/**
 * @file  PostFallDamageFinalizeMoveSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PostFallDamageFinalizeMoveSystem.
 *
 */
class PostFallDamageFinalizeMoveSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSTFALLDAMAGEFINALIZEMOVESYSTEM
public:
    class PostFallDamageFinalizeMoveSystem& operator=(class PostFallDamageFinalizeMoveSystem const &) = delete;
    PostFallDamageFinalizeMoveSystem(class PostFallDamageFinalizeMoveSystem const &) = delete;
    PostFallDamageFinalizeMoveSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createPostFallDamageFinalizeMoveSystem\@PostFallDamageFinalizeMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPostFallDamageFinalizeMoveSystem();

};