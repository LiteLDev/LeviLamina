#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class HarvestFarmBlockGoal : public ::BaseMoveToBlockGoal {

public:
    // prevent constructor by default
    HarvestFarmBlockGoal& operator=(HarvestFarmBlockGoal const&) = delete;
    HarvestFarmBlockGoal(HarvestFarmBlockGoal const&)            = delete;
    HarvestFarmBlockGoal()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@HarvestFarmBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@HarvestFarmBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@HarvestFarmBlockGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@HarvestFarmBlockGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@HarvestFarmBlockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@HarvestFarmBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @vftbl 11
     * @symbol ?isValidTarget\@HarvestFarmBlockGoal\@\@MEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    /**
     * @symbol ??0HarvestFarmBlockGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI HarvestFarmBlockGoal(class Mob&);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?trySowCrop\@HarvestFarmBlockGoal\@\@IEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool trySowCrop(class BlockSource&, class BlockPos const&);
    // NOLINTEND
};
