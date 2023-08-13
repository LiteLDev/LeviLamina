#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"

class MoveToVillageGoal : public ::BaseMoveToGoal {

public:
    // prevent constructor by default
    MoveToVillageGoal& operator=(MoveToVillageGoal const&) = delete;
    MoveToVillageGoal(MoveToVillageGoal const&)            = delete;
    MoveToVillageGoal()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@MoveToVillageGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MoveToVillageGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@MoveToVillageGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 6
     * @symbol ?tick\@MoveToVillageGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MoveToVillageGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @vftbl 11
     * @symbol ?isValidTarget\@MoveToVillageGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    /**
     * @vftbl 14
     * @symbol ?_moveToBlock\@MoveToVillageGoal\@\@UEAAXXZ
     */
    virtual void _moveToBlock();
    /**
     * @vftbl 17
     * @symbol ?_selectRandomPosInVillage\@MoveToVillageGoal\@\@MEAA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos _selectRandomPosInVillage();
    /**
     * @symbol ??0MoveToVillageGoal\@\@QEAA\@AEAVMob\@\@MMMH\@Z
     */
    MCAPI MoveToVillageGoal(class Mob&, float, float, float, int);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_tryGetCurrentVillage\@MoveToVillageGoal\@\@IEAA?AV?$shared_ptr\@VVillage\@\@\@std\@\@XZ
     */
    MCAPI std::shared_ptr<class Village> _tryGetCurrentVillage();
    // NOLINTEND
};
