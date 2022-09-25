/**
 * @file  EmergeGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EmergeGoal.
 *
 */
class EmergeGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EMERGEGOAL
public:
    class EmergeGoal& operator=(class EmergeGoal const &) = delete;
    EmergeGoal(class EmergeGoal const &) = delete;
    EmergeGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~EmergeGoal();
    /**
     * @hash   -770090230
     * @vftbl  1
     * @symbol ?canUse@EmergeGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -297174232
     * @vftbl  2
     * @symbol ?canContinueToUse@EmergeGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   995972691
     * @vftbl  4
     * @symbol ?start@EmergeGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1310014979
     * @vftbl  5
     * @symbol ?stop@EmergeGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -803612322
     * @vftbl  6
     * @symbol ?tick@EmergeGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1427792182
     * @vftbl  7
     * @symbol ?appendDebugInfo@EmergeGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   218386535
     * @symbol ??0EmergeGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI EmergeGoal(class Mob &);

};