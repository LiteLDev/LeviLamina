#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class FertilizeFarmBlockGoal : public ::BaseMoveToBlockGoal {

public:
    // prevent constructor by default
    FertilizeFarmBlockGoal& operator=(FertilizeFarmBlockGoal const&) = delete;
    FertilizeFarmBlockGoal(FertilizeFarmBlockGoal const&)            = delete;
    FertilizeFarmBlockGoal()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@FertilizeFarmBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@FertilizeFarmBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@FertilizeFarmBlockGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@FertilizeFarmBlockGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@FertilizeFarmBlockGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@FertilizeFarmBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @symbol ?isValidTarget\@FertilizeFarmBlockGoal\@\@MEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ??0FertilizeFarmBlockGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI FertilizeFarmBlockGoal(class Mob&); // NOLINT

    // protected:
    /**
     * @symbol ?tryFertilizeCrop\@FertilizeFarmBlockGoal\@\@IEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool tryFertilizeCrop(class BlockSource&, class BlockPos const&); // NOLINT

    // private:
    /**
     * @symbol ?_findFertilizer\@FertilizeFarmBlockGoal\@\@AEAA_NXZ
     */
    MCAPI bool _findFertilizer(); // NOLINT

protected:
private:
};
