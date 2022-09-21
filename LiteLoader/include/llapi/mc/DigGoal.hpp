/**
 * @file  MC/DigGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DigGoal.
 *
 */
class DigGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIGGOAL
public:
    class DigGoal& operator=(class DigGoal const &) = delete;
    DigGoal(class DigGoal const &) = delete;
    DigGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DigGoal();
    /**
     * @hash   -537066421
     * @vftbl  1
     * @symbol ?canUse@DigGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   127711193
     * @vftbl  2
     * @symbol ?canContinueToUse@DigGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1063476260
     * @vftbl  4
     * @symbol ?start@DigGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1658853900
     * @vftbl  5
     * @symbol ?stop@DigGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   91252751
     * @vftbl  6
     * @symbol ?tick@DigGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -484014651
     * @vftbl  7
     * @symbol ?appendDebugInfo@DigGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   953459688
     * @symbol ??0DigGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI DigGoal(class Mob &);

};