#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FloatGoal : public ::Goal {

public:
    // prevent constructor by default
    FloatGoal& operator=(FloatGoal const&) = delete;
    FloatGoal(FloatGoal const&)            = delete;
    FloatGoal()                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@FloatGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 6
     * @symbol ?tick\@FloatGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@FloatGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0FloatGoal\@\@QEAA\@AEAVMob\@\@_N\@Z
     */
    MCAPI FloatGoal(class Mob&, bool);
    // NOLINTEND
};
