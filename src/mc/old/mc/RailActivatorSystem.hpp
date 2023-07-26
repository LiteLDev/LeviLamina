/**
 * @file  RailActivatorSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RailActivatorSystem.
 *
 */
class RailActivatorSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAILACTIVATORSYSTEM
public:
    class RailActivatorSystem& operator=(class RailActivatorSystem const &) = delete;
    RailActivatorSystem(class RailActivatorSystem const &) = delete;
    RailActivatorSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RailActivatorSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@RailActivatorSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol  ?_tickComponent\@RailActivatorSystem\@\@CAXAEAVEntityContext\@\@AEAVActorOwnerComponent\@\@AEAVRailActivatorComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class EntityContext &, class ActorOwnerComponent &, class RailActivatorComponent &);

private:

};