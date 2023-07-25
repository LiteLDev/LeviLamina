#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class RaidGardenGoal : public ::BaseMoveToBlockGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDGARDENGOAL
public:
    RaidGardenGoal& operator=(RaidGardenGoal const&) = delete;
    RaidGardenGoal(RaidGardenGoal const&)            = delete;
    RaidGardenGoal()                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RaidGardenGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RaidGardenGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@RaidGardenGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 6
     * @symbol ?tick\@RaidGardenGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RaidGardenGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 11
     * @symbol ?isValidTarget\@RaidGardenGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    /**
     * @symbol
     * ??0RaidGardenGoal\@\@QEAA\@AEAVMob\@\@MHHHMHHHHAEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI
    RaidGardenGoal(class Mob&, float, int, int, int, float, int, int, int, int, std::vector<class BlockDescriptor> const&);
};
