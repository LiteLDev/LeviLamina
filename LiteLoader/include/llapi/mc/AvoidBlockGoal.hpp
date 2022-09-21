/**
 * @file  MC/AvoidBlockGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AvoidBlockGoal.
 *
 */
class AvoidBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVOIDBLOCKGOAL
public:
    class AvoidBlockGoal& operator=(class AvoidBlockGoal const &) = delete;
    AvoidBlockGoal(class AvoidBlockGoal const &) = delete;
    AvoidBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AvoidBlockGoal();
    /**
     * @hash   981497061
     * @vftbl  1
     * @symbol ?canUse@AvoidBlockGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1039168771
     * @vftbl  2
     * @symbol ?canContinueToUse@AvoidBlockGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1256058894
     * @vftbl  4
     * @symbol ?start@AvoidBlockGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1783845906
     * @vftbl  5
     * @symbol ?stop@AvoidBlockGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1989389015
     * @vftbl  6
     * @symbol ?tick@AvoidBlockGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1177702267
     * @vftbl  7
     * @symbol ?appendDebugInfo@AvoidBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -943056382
     * @symbol ??0AvoidBlockGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI AvoidBlockGoal(class Mob &);

//private:
    /**
     * @hash   950615916
     * @symbol ?_isValidTarget@AvoidBlockGoal@@AEBA_NAEBVBlock@@@Z
     */
    MCAPI bool _isValidTarget(class Block const &) const;

private:

};