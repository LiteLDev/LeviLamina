#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FloatWanderGoal : public ::Goal {
public:
    // prevent constructor by default
    FloatWanderGoal& operator=(FloatWanderGoal const&);
    FloatWanderGoal(FloatWanderGoal const&);
    FloatWanderGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@FloatWanderGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 6, symbol: ?tick@FloatWanderGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@FloatWanderGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0FloatWanderGoal@@QEAA@AEAVMob@@MMM_N1UFloatRange@@@Z
    MCAPI FloatWanderGoal(class Mob&, float, float, float, bool, bool, struct FloatRange);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canReach@FloatWanderGoal@@AEAA_NAEBVVec3@@M@Z
    MCAPI bool _canReach(class Vec3 const&, float);

    // NOLINTEND
};
