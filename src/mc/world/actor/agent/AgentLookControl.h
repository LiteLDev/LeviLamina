#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/LookControl.h"

class AgentLookControl : public ::LookControl {
public:
    // prevent constructor by default
    AgentLookControl& operator=(AgentLookControl const&);
    AgentLookControl(AgentLookControl const&);
    AgentLookControl();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AgentLookControl@@UEAA@XZ
    virtual ~AgentLookControl() = default;

    // vIndex: 1, symbol: ?initializeInternal@AgentLookControl@@UEAAXAEAVMob@@@Z
    virtual void initializeInternal(class Mob& mob);

    // vIndex: 2, symbol: ?tick@AgentLookControl@@UEAAXAEAVMob@@@Z
    virtual void tick(class Mob& mob);

    // symbol: ?sBaseYMax@AgentLookControl@@2MA
    MCAPI static float sBaseYMax;

    // NOLINTEND
};
