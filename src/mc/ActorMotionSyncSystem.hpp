/**
 * @file  ActorMotionSyncSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorMotionSyncSystem.
 *
 */
class ActorMotionSyncSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMOTIONSYNCSYSTEM
public:
    class ActorMotionSyncSystem& operator=(class ActorMotionSyncSystem const &) = delete;
    ActorMotionSyncSystem(class ActorMotionSyncSystem const &) = delete;
    ActorMotionSyncSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorMotionSyncSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@ActorMotionSyncSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

};