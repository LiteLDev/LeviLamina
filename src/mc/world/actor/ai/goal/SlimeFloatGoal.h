#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SlimeFloatGoal : public ::Goal {

public:
    // prevent constructor by default
    SlimeFloatGoal& operator=(SlimeFloatGoal const&) = delete;
    SlimeFloatGoal(SlimeFloatGoal const&)            = delete;
    SlimeFloatGoal()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@SlimeFloatGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 6
     * @symbol ?tick\@SlimeFloatGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SlimeFloatGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0SlimeFloatGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI SlimeFloatGoal(class Mob&);
    // NOLINTEND
};
