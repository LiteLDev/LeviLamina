/**
 * @file  LookAtActorGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LookAtActorGoal.
 *
 */
class LookAtActorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATACTORGOAL
public:
    class LookAtActorGoal& operator=(class LookAtActorGoal const &) = delete;
    LookAtActorGoal(class LookAtActorGoal const &) = delete;
    LookAtActorGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LookAtActorGoal();
    /**
     * @hash   133137994
     * @vftbl  1
     * @symbol  ?canUse\@LookAtActorGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   873861496
     * @vftbl  2
     * @symbol  ?canContinueToUse\@LookAtActorGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   2036967059
     * @vftbl  4
     * @symbol  ?start\@LookAtActorGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1392097405
     * @vftbl  5
     * @symbol  ?stop\@LookAtActorGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1530009682
     * @vftbl  6
     * @symbol  ?tick\@LookAtActorGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1684117238
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@LookAtActorGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1817668375
     * @symbol  ??0LookAtActorGoal\@\@QEAA\@AEAVMob\@\@MMHHHH\@Z
     */
    MCAPI LookAtActorGoal(class Mob &, float, float, int, int, int, int);

//private:
    /**
     * @hash   -1674978613
     * @symbol  ?_withinFieldOfView\@LookAtActorGoal\@\@AEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool _withinFieldOfView(class Actor &);

private:

};