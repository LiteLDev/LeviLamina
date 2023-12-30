#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SensingComponent {
public:
    // prevent constructor by default
    SensingComponent& operator=(SensingComponent const&);
    SensingComponent(SensingComponent const&);
    SensingComponent();

public:
    // NOLINTBEGIN
    // symbol: ?canSee@SensingComponent@@QEAA_NAEAVMob@@AEBVActor@@@Z
    MCAPI bool canSee(class Mob& owner, class Actor const& target);

    // symbol: ?reset@SensingComponent@@QEAAXXZ
    MCAPI void reset();

    // symbol: ?withinFOV@SensingComponent@@QEAA_NAEAVMob@@AEBVVec3@@M@Z
    MCAPI bool withinFOV(class Mob& owner, class Vec3 const& targetPosition, float fov);

    // NOLINTEND
};
