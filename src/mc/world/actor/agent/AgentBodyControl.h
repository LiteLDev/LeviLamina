#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/BodyControl.h"

class AgentBodyControl : public ::BodyControl {
public:
    // prevent constructor by default
    AgentBodyControl& operator=(AgentBodyControl const&);
    AgentBodyControl(AgentBodyControl const&);
    AgentBodyControl();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AgentBodyControl@@UEAA@XZ
    virtual ~AgentBodyControl() = default;

    // vIndex: 1, symbol: ?clientTick@AgentBodyControl@@UEAAXAEAVMob@@@Z
    virtual void clientTick(class Mob& mob);

    // NOLINTEND
};
