#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class MoveToLandGoal : public ::BaseMoveToBlockGoal {

public:
    // prevent constructor by default
    MoveToLandGoal& operator=(MoveToLandGoal const&) = delete;
    MoveToLandGoal(MoveToLandGoal const&)            = delete;
    MoveToLandGoal()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@MoveToLandGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MoveToLandGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MoveToLandGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @symbol ?isValidTarget\@MoveToLandGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    /**
     * @vftbl 14
     * @symbol ?_moveToBlock\@MoveToLandGoal\@\@MEAAXXZ
     */
    virtual void _moveToBlock();
    /**
     * @symbol ??0MoveToLandGoal\@\@QEAA\@AEAVMob\@\@MHHHM\@Z
     */
    MCAPI MoveToLandGoal(class Mob&, float, int, int, int, float);
    // NOLINTEND
};
