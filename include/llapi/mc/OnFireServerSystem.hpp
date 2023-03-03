/**
 * @file  OnFireServerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OnFireServerSystem.
 *
 */
class OnFireServerSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONFIRESERVERSYSTEM
public:
    class OnFireServerSystem& operator=(class OnFireServerSystem const &) = delete;
    OnFireServerSystem(class OnFireServerSystem const &) = delete;
    OnFireServerSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OnFireServerSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@OnFireServerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol  ?_tickServer\@OnFireServerSystem\@\@CAXAEAVEntityContext\@\@AEAVActorOwnerComponent\@\@AEAUOnFireComponent\@\@\@Z
     */
    MCAPI static void _tickServer(class EntityContext &, class ActorOwnerComponent &, struct OnFireComponent &);

private:

};