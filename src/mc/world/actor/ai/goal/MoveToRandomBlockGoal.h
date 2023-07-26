#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveToRandomBlockGoal {

public:
    // prevent constructor by default
    MoveToRandomBlockGoal& operator=(MoveToRandomBlockGoal const&) = delete;
    MoveToRandomBlockGoal(MoveToRandomBlockGoal const&)            = delete;
    MoveToRandomBlockGoal()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@MoveToRandomBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MoveToRandomBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@MoveToRandomBlockGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@MoveToRandomBlockGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@MoveToRandomBlockGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MoveToRandomBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0MoveToRandomBlockGoal\@\@QEAA\@AEAVMob\@\@MMM\@Z
     */
    MCAPI MoveToRandomBlockGoal(class Mob&, float, float, float); // NOLINT

    // private:
    /**
     * @symbol ?_isValidDestinationBlock\@MoveToRandomBlockGoal\@\@AEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _isValidDestinationBlock(class BlockSource&, class BlockPos const&); // NOLINT

private:
};
