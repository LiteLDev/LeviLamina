#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class MoveToLiquidGoal : public ::BaseMoveToBlockGoal {

public:
    // prevent constructor by default
    MoveToLiquidGoal& operator=(MoveToLiquidGoal const&) = delete;
    MoveToLiquidGoal(MoveToLiquidGoal const&)            = delete;
    MoveToLiquidGoal()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@MoveToLiquidGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MoveToLiquidGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MoveToLiquidGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @symbol ?isValidTarget\@MoveToLiquidGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?findTargetBlock\@MoveToLiquidGoal\@\@UEAA_NXZ
     */
    virtual bool findTargetBlock(); // NOLINT
    /**
     * @symbol ??0MoveToLiquidGoal\@\@QEAA\@AEAVMob\@\@MHHHW4MaterialType\@\@M\@Z
     */
    MCAPI MoveToLiquidGoal(class Mob&, float, int, int, int, enum class MaterialType, float); // NOLINT
};
