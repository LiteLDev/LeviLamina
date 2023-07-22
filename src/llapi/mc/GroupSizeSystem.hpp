/**
 * @file  GroupSizeSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GroupSizeSystem.
 *
 */
class GroupSizeSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROUPSIZESYSTEM
public:
    class GroupSizeSystem& operator=(class GroupSizeSystem const &) = delete;
    GroupSizeSystem(class GroupSizeSystem const &) = delete;
    GroupSizeSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GroupSizeSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@GroupSizeSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol  ?_tickComponent\@GroupSizeSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVGroupSizeComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent &, class GroupSizeComponent &);

private:

};