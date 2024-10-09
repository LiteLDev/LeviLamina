#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/BodyControl.h"

class AgentBodyControl : public ::BodyControl {
public:
    // prevent constructor by default
    AgentBodyControl& operator=(AgentBodyControl const&);
    AgentBodyControl(AgentBodyControl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AgentBodyControl() = default;

    // vIndex: 1
    virtual void clientTick(class Mob& mob);

    MCAPI AgentBodyControl();

    // NOLINTEND
};
