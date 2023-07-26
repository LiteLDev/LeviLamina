#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"

class LayEggGoal : public ::BaseMoveToGoal {

public:
    // prevent constructor by default
    LayEggGoal& operator=(LayEggGoal const&) = delete;
    LayEggGoal(LayEggGoal const&)            = delete;
    LayEggGoal()                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@LayEggGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@LayEggGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@LayEggGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@LayEggGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@LayEggGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @symbol ?isValidTarget\@LayEggGoal\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isValidTarget(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?_moveToBlock\@LayEggGoal\@\@MEAAXXZ
     */
    virtual void _moveToBlock(); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?findTargetBlock\@LayEggGoal\@\@UEAA_NXZ
     */
    virtual bool findTargetBlock(); // NOLINT
    /**
     * @symbol
     * ??0LayEggGoal\@\@QEAA\@AEAVMob\@\@MHHMAEBV?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@std\@\@AEBV?$vector\@W4MaterialType\@\@V?$allocator\@W4MaterialType\@\@\@std\@\@\@3\@_N3MAEBVItemDescriptor\@\@AEBVActorDefinitionTrigger\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI
    LayEggGoal(class Mob&, float, int, int, float, std::vector<class ItemDescriptor> const&, std::vector<enum class MaterialType> const&, bool, bool, float, class ItemDescriptor const&, class ActorDefinitionTrigger const&, std::string const&); // NOLINT

    // protected:
    /**
     * @symbol ?_isTargetBlock\@LayEggGoal\@\@IEBA_NAEBVBlockLegacy\@\@\@Z
     */
    MCAPI bool _isTargetBlock(class BlockLegacy const&) const; // NOLINT
    /**
     * @symbol ?_layEgg\@LayEggGoal\@\@IEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void _layEgg(class BlockPos const&); // NOLINT

protected:
};
