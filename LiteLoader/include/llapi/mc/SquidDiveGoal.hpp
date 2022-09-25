/**
 * @file  SquidDiveGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SquidDiveGoal.
 *
 */
class SquidDiveGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUIDDIVEGOAL
public:
    class SquidDiveGoal& operator=(class SquidDiveGoal const &) = delete;
    SquidDiveGoal(class SquidDiveGoal const &) = delete;
    SquidDiveGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SquidDiveGoal();
    /**
     * @hash   -1058052121
     * @vftbl  1
     * @symbol ?canUse@SquidDiveGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   249305509
     * @vftbl  2
     * @symbol ?canContinueToUse@SquidDiveGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1652338832
     * @vftbl  4
     * @symbol ?start@SquidDiveGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   -862830407
     * @vftbl  7
     * @symbol ?appendDebugInfo@SquidDiveGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SQUIDDIVEGOAL
    /**
     * @hash   -231081584
     * @symbol ?stop@SquidDiveGoal@@UEAAXXZ
     */
    MCVAPI void stop();
    /**
     * @hash   -715588021
     * @symbol ?tick@SquidDiveGoal@@UEAAXXZ
     */
    MCVAPI void tick();
#endif

};