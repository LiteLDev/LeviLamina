#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PushableComponent {
public:
    // prevent constructor by default
    PushableComponent& operator=(PushableComponent const&);
    PushableComponent(PushableComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PushableComponent@@QEAA@XZ
    MCAPI PushableComponent();

    // symbol: ?initFromDefinition@PushableComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor& actor);

    // symbol: ?initFromDefinition@PushableComponent@@QEAAXAEAVActor@@AEBUPushableDescription@@@Z
    MCAPI void initFromDefinition(class Actor&, struct PushableDescription const& desc);

    // symbol: ?isPushable@PushableComponent@@QEAA_NXZ
    MCAPI bool isPushable();

    // symbol: ?isPushableByPiston@PushableComponent@@QEAA_NXZ
    MCAPI bool isPushableByPiston();

    // symbol: ?push@PushableComponent@@QEAAXAEAVActor@@AEBVVec3@@@Z
    MCAPI void push(class Actor& owner, class Vec3 const& vec);

    // symbol: ?push@PushableComponent@@QEAAXAEAVActor@@0_N@Z
    MCAPI void push(class Actor& owner, class Actor& other, bool pushSelfOnly);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calculatePushVectorBoat@PushableComponent@@AEAA?AU?$pair@VVec3@@V1@@std@@AEAVActor@@0_N@Z
    MCAPI std::pair<class Vec3, class Vec3>
          _calculatePushVectorBoat(class Actor& owner, class Actor& other, bool pushSelfOnly);

    // symbol: ?_calculatePushVectorMinecart@PushableComponent@@AEAA?AU?$pair@VVec3@@V1@@std@@AEAVActor@@0_N@Z
    MCAPI std::pair<class Vec3, class Vec3>
          _calculatePushVectorMinecart(class Actor& owner, class Actor& other, bool pushSelfOnly);

    // NOLINTEND
};
