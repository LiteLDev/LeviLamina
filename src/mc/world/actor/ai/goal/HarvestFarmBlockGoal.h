#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class HarvestFarmBlockGoal : public ::BaseMoveToBlockGoal {

public:
    // prevent constructor by default
    HarvestFarmBlockGoal& operator=(HarvestFarmBlockGoal const&) = delete;
    HarvestFarmBlockGoal(HarvestFarmBlockGoal const&)            = delete;
    HarvestFarmBlockGoal()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@HarvestFarmBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@HarvestFarmBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@HarvestFarmBlockGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@HarvestFarmBlockGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@HarvestFarmBlockGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@HarvestFarmBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?isValidTarget\@HarvestFarmBlockGoal\@\@MEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ??0HarvestFarmBlockGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI HarvestFarmBlockGoal(class Mob&); // NOLINT

    // protected:
    /**
     * @symbol ?trySowCrop\@HarvestFarmBlockGoal\@\@IEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool trySowCrop(class BlockSource&, class BlockPos const&); // NOLINT

protected:
};
