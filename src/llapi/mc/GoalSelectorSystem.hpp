/**
 * @file  GoalSelectorSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GoalSelectorSystem.
 *
 */
class GoalSelectorSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOALSELECTORSYSTEM
public:
    class GoalSelectorSystem& operator=(class GoalSelectorSystem const &) = delete;
    GoalSelectorSystem(class GoalSelectorSystem const &) = delete;
    GoalSelectorSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GoalSelectorSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  ?tick\@GoalSelectorSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol  ?_tickGoalSelectorComponent\@GoalSelectorSystem\@\@CAXAEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _tickGoalSelectorComponent(class ActorOwnerComponent &);

private:

};