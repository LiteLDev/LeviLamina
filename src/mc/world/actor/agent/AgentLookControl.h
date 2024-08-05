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
    // vIndex: 0
    virtual ~AgentLookControl() = default;

    // vIndex: 1
    virtual void initializeInternal(class Mob& mob);

    // vIndex: 2
    virtual void tick(class Mob& mob);

    MCAPI static float sBaseYMax;

    // NOLINTEND
};
