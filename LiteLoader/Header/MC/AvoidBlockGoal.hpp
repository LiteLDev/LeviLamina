/**
 * @file  AvoidBlockGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @hash   -150072171
     */
    virtual ~AvoidBlockGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@AvoidBlockGoal@@UEAA_NXZ
     * @hash   981497061
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@AvoidBlockGoal@@UEAA_NXZ
     * @hash   1039168771
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@AvoidBlockGoal@@UEAAXXZ
     * @hash   1256058894
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@AvoidBlockGoal@@UEAAXXZ
     * @hash   -1783845906
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@AvoidBlockGoal@@UEAAXXZ
     * @hash   -1989389015
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@AvoidBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1177702267
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0AvoidBlockGoal@@QEAA@AEAVMob@@@Z
     * @hash   -943056382
     */
    MCAPI AvoidBlockGoal(class Mob &);

//private:
    /**
     * @symbol ?_isValidTarget@AvoidBlockGoal@@AEBA_NAEBVBlock@@@Z
     * @hash   950615916
     */
    MCAPI bool _isValidTarget(class Block const &) const;

private:

};