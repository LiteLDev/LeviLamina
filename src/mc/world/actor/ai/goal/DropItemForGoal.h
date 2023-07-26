#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class DropItemForGoal : public ::BaseMoveToBlockGoal {

public:
    // prevent constructor by default
    DropItemForGoal& operator=(DropItemForGoal const&) = delete;
    DropItemForGoal(DropItemForGoal const&)            = delete;
    DropItemForGoal()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@DropItemForGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DropItemForGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@DropItemForGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@DropItemForGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@DropItemForGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DropItemForGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @symbol ?isValidTarget\@DropItemForGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?findTargetBlock\@DropItemForGoal\@\@UEAA_NXZ
     */
    virtual bool findTargetBlock(); // NOLINT
    /**
     * @symbol ??0DropItemForGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DropItemForGoal(class Mob&); // NOLINT

    // private:
    /**
     * @symbol ?_getLootTable\@DropItemForGoal\@\@AEAAPEAVLootTable\@\@XZ
     */
    MCAPI class LootTable* _getLootTable(); // NOLINT

private:
};
