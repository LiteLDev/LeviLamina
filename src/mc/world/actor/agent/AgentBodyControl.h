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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void clientTick$(class Mob& mob);

    // NOLINTEND
};
