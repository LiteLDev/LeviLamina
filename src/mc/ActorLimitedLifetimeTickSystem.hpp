/**
 * @file  ActorLimitedLifetimeTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorLimitedLifetimeTickSystem.
 *
 */
class ActorLimitedLifetimeTickSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORLIMITEDLIFETIMETICKSYSTEM
public:
    class ActorLimitedLifetimeTickSystem& operator=(class ActorLimitedLifetimeTickSystem const &) = delete;
    ActorLimitedLifetimeTickSystem(class ActorLimitedLifetimeTickSystem const &) = delete;
    ActorLimitedLifetimeTickSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorLimitedLifetimeTickSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@ActorLimitedLifetimeTickSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

};