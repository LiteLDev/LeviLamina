/**
 * @file  MC/RaidGardenGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RaidGardenGoal.
 *
 */
class RaidGardenGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDGARDENGOAL
public:
    class RaidGardenGoal& operator=(class RaidGardenGoal const &) = delete;
    RaidGardenGoal(class RaidGardenGoal const &) = delete;
    RaidGardenGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RaidGardenGoal();
    /**
     * @hash   -961368962
     * @vftbl  1
     * @symbol ?canUse@RaidGardenGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -903681876
     * @vftbl  2
     * @symbol ?canContinueToUse@RaidGardenGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -190673465
     * @vftbl  4
     * @symbol ?start@RaidGardenGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   858369266
     * @vftbl  6
     * @symbol ?tick@RaidGardenGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   3892258
     * @vftbl  7
     * @symbol ?appendDebugInfo@RaidGardenGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   -1912161920
     * @vftbl  11
     * @symbol ?isValidTarget@RaidGardenGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @hash   764955799
     * @symbol ??0RaidGardenGoal@@QEAA@AEAVMob@@MHHHMHHHHAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@@Z
     */
    MCAPI RaidGardenGoal(class Mob &, float, int, int, int, float, int, int, int, int, std::vector<class BlockDescriptor> const &);

};