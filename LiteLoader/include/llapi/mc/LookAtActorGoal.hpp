/**
 * @file  LookAtActorGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~LookAtActorGoal();
    /**
     * @hash   -85600982
     * @vftbl  1
     * @symbol ?canUse@LookAtActorGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   655122520
     * @vftbl  2
     * @symbol ?canContinueToUse@LookAtActorGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1818258835
     * @vftbl  4
     * @symbol ?start@LookAtActorGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1610129085
     * @vftbl  5
     * @symbol ?stop@LookAtActorGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1748717906
     * @vftbl  6
     * @symbol ?tick@LookAtActorGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1465378262
     * @vftbl  7
     * @symbol ?appendDebugInfo@LookAtActorGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1598944775
     * @symbol ??0LookAtActorGoal@@QEAA@AEAVMob@@MMHHHH@Z
     */
    MCAPI LookAtActorGoal(class Mob &, float, float, int, int, int, int);

//private:
    /**
     * @hash   -1893702213
     * @symbol ?_withinFieldOfView@LookAtActorGoal@@AEAA_NAEAVActor@@@Z
     */
    MCAPI bool _withinFieldOfView(class Actor &);

private:

};