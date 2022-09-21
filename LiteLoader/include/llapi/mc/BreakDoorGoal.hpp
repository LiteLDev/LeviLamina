/**
 * @file  MC/BreakDoorGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreakDoorGoal.
 *
 */
class BreakDoorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKDOORGOAL
public:
    class BreakDoorGoal& operator=(class BreakDoorGoal const &) = delete;
    BreakDoorGoal(class BreakDoorGoal const &) = delete;
    BreakDoorGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BreakDoorGoal();
    /**
     * @hash   1423945984
     * @vftbl  1
     * @symbol ?canUse@BreakDoorGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -2004179890
     * @vftbl  2
     * @symbol ?canContinueToUse@BreakDoorGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -409814167
     * @vftbl  4
     * @symbol ?start@BreakDoorGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -805431255
     * @vftbl  5
     * @symbol ?stop@BreakDoorGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1289768556
     * @vftbl  6
     * @symbol ?tick@BreakDoorGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1534792480
     * @vftbl  7
     * @symbol ?appendDebugInfo@BreakDoorGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1106152445
     * @symbol ??0BreakDoorGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI BreakDoorGoal(class Mob &);

};