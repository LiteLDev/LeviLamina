#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/BodyControl.h"

class AgentBodyControl : public ::BodyControl {
public:
    // prevent constructor by default
    AgentBodyControl& operator=(AgentBodyControl const&);
    AgentBodyControl(AgentBodyControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~AgentBodyControl();

    // vIndex: 1, symbol: ?clientTick@AgentBodyControl@@UEAAXAEAVMob@@@Z
    virtual void clientTick(class Mob&);

    // symbol: ??0AgentBodyControl@@QEAA@XZ
    MCAPI AgentBodyControl();

    // NOLINTEND
};
