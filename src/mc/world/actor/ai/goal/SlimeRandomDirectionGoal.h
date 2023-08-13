#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SlimeRandomDirectionGoal : public ::Goal {

public:
    // prevent constructor by default
    SlimeRandomDirectionGoal& operator=(SlimeRandomDirectionGoal const&) = delete;
    SlimeRandomDirectionGoal(SlimeRandomDirectionGoal const&)            = delete;
    SlimeRandomDirectionGoal()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@SlimeRandomDirectionGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 6
     * @symbol ?tick\@SlimeRandomDirectionGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SlimeRandomDirectionGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0SlimeRandomDirectionGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI SlimeRandomDirectionGoal(class Mob&);
    // NOLINTEND
};
