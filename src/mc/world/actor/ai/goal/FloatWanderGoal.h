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
    // vIndex: 0, symbol: __gen_??1FloatWanderGoal@@UEAA@XZ
    virtual ~FloatWanderGoal() = default;

    // vIndex: 1, symbol: ?canUse@FloatWanderGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 6, symbol: ?tick@FloatWanderGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@FloatWanderGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0FloatWanderGoal@@QEAA@AEAVMob@@MMM_N1UFloatRange@@@Z
    MCAPI FloatWanderGoal(
        class Mob&        mob,
        float             xzDist,
        float             yDist,
        float             yOffset,
        bool              mustReach,
        bool              randomReselect,
        struct FloatRange floatDuration
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canReach@FloatWanderGoal@@AEAA_NAEBVVec3@@M@Z
    MCAPI bool _canReach(class Vec3 const& targetPos, float dist);

    // NOLINTEND
};
