#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class DropItemForGoal : public ::BaseMoveToBlockGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DROPITEMFORGOAL
public:
    DropItemForGoal& operator=(DropItemForGoal const&) = delete;
    DropItemForGoal(DropItemForGoal const&)            = delete;
    DropItemForGoal()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@DropItemForGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DropItemForGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@DropItemForGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@DropItemForGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@DropItemForGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DropItemForGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @symbol ?isValidTarget\@DropItemForGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    /**
     * @vftbl 17
     * @symbol ?findTargetBlock\@DropItemForGoal\@\@UEAA_NXZ
     */
    virtual bool findTargetBlock();
    /**
     * @symbol ??0DropItemForGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DropItemForGoal(class Mob&);

    // private:
    /**
     * @symbol ?_getLootTable\@DropItemForGoal\@\@AEAAPEAVLootTable\@\@XZ
     */
    MCAPI class LootTable* _getLootTable();

private:
};
