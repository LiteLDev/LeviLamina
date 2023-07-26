#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"

class MoveToVillageGoal : public ::BaseMoveToGoal {

public:
    // prevent constructor by default
    MoveToVillageGoal& operator=(MoveToVillageGoal const&) = delete;
    MoveToVillageGoal(MoveToVillageGoal const&)            = delete;
    MoveToVillageGoal()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@MoveToVillageGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MoveToVillageGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@MoveToVillageGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@MoveToVillageGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MoveToVillageGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @symbol ?isValidTarget\@MoveToVillageGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?_moveToBlock\@MoveToVillageGoal\@\@UEAAXXZ
     */
    virtual void _moveToBlock(); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?_selectRandomPosInVillage\@MoveToVillageGoal\@\@MEAA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos _selectRandomPosInVillage(); // NOLINT
    /**
     * @symbol ??0MoveToVillageGoal\@\@QEAA\@AEAVMob\@\@MMMH\@Z
     */
    MCAPI MoveToVillageGoal(class Mob&, float, float, float, int); // NOLINT

    // protected:
    /**
     * @symbol ?_tryGetCurrentVillage\@MoveToVillageGoal\@\@IEAA?AV?$shared_ptr\@VVillage\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class Village> _tryGetCurrentVillage(); // NOLINT

protected:
};
