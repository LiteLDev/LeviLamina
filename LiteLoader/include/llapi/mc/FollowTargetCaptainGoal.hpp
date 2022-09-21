/**
 * @file  MC/FollowTargetCaptainGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FollowTargetCaptainGoal.
 *
 */
class FollowTargetCaptainGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLLOWTARGETCAPTAINGOAL
public:
    class FollowTargetCaptainGoal& operator=(class FollowTargetCaptainGoal const &) = delete;
    FollowTargetCaptainGoal(class FollowTargetCaptainGoal const &) = delete;
    FollowTargetCaptainGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FollowTargetCaptainGoal();
    /**
     * @hash   37144043
     * @vftbl  1
     * @symbol ?canUse@FollowTargetCaptainGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1185271081
     * @vftbl  2
     * @symbol ?canContinueToUse@FollowTargetCaptainGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -672101772
     * @vftbl  4
     * @symbol ?start@FollowTargetCaptainGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1174857652
     * @vftbl  5
     * @symbol ?stop@FollowTargetCaptainGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -288556209
     * @vftbl  6
     * @symbol ?tick@FollowTargetCaptainGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -481280635
     * @vftbl  7
     * @symbol ?appendDebugInfo@FollowTargetCaptainGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -1132732391
     * @symbol ??0FollowTargetCaptainGoal@@QEAA@AEAVMob@@MMM@Z
     */
    MCAPI FollowTargetCaptainGoal(class Mob &, float, float, float);

//private:
    /**
     * @hash   1844502390
     * @symbol ?_determineMovePos@FollowTargetCaptainGoal@@AEAAXXZ
     */
    MCAPI void _determineMovePos();

private:

};