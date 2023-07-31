#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToVillageGoal.h"

class StrollTowardsVillageGoal : public ::MoveToVillageGoal {

public:
    // prevent constructor by default
    StrollTowardsVillageGoal& operator=(StrollTowardsVillageGoal const&) = delete;
    StrollTowardsVillageGoal(StrollTowardsVillageGoal const&)            = delete;
    StrollTowardsVillageGoal()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@StrollTowardsVillageGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@StrollTowardsVillageGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @vftbl 17
     * @symbol ?_selectRandomPosInVillage\@StrollTowardsVillageGoal\@\@MEAA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos _selectRandomPosInVillage();
    // NOLINTEND
};
