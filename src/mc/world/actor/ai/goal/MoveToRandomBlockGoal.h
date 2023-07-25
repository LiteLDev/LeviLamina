#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveToRandomBlockGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETORANDOMBLOCKGOAL
public:
    MoveToRandomBlockGoal& operator=(MoveToRandomBlockGoal const&) = delete;
    MoveToRandomBlockGoal(MoveToRandomBlockGoal const&)            = delete;
    MoveToRandomBlockGoal()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@MoveToRandomBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MoveToRandomBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@MoveToRandomBlockGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@MoveToRandomBlockGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@MoveToRandomBlockGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MoveToRandomBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0MoveToRandomBlockGoal\@\@QEAA\@AEAVMob\@\@MMM\@Z
     */
    MCAPI MoveToRandomBlockGoal(class Mob&, float, float, float);

    // private:
    /**
     * @symbol ?_isValidDestinationBlock\@MoveToRandomBlockGoal\@\@AEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _isValidDestinationBlock(class BlockSource&, class BlockPos const&);

private:
};
