/**
 * @file  LookAtTradingPlayerGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "LookAtActorGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LookAtTradingPlayerGoal.
 *
 */
class LookAtTradingPlayerGoal : public LookAtActorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATTRADINGPLAYERGOAL
public:
    class LookAtTradingPlayerGoal& operator=(class LookAtTradingPlayerGoal const &) = delete;
    LookAtTradingPlayerGoal(class LookAtTradingPlayerGoal const &) = delete;
    LookAtTradingPlayerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LookAtTradingPlayerGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@LookAtTradingPlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@LookAtTradingPlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@LookAtTradingPlayerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0LookAtTradingPlayerGoal\@\@QEAA\@AEAVMob\@\@MMHHHH\@Z
     */
    MCAPI LookAtTradingPlayerGoal(class Mob &, float, float, int, int, int, int);

};