/**
 * @file  TrailSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TrailSystem.
 *
 */
class TrailSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRAILSYSTEM
public:
    class TrailSystem& operator=(class TrailSystem const &) = delete;
    TrailSystem(class TrailSystem const &) = delete;
    TrailSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TrailSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@TrailSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol  ?_tickComponent\@TrailSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVTrailComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent &, class TrailComponent &);

private:

};