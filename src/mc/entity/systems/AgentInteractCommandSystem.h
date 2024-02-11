#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AgentInteractCommandSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AgentInteractCommandSystem& operator=(AgentInteractCommandSystem const&);
    AgentInteractCommandSystem(AgentInteractCommandSystem const&);
    AgentInteractCommandSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AgentInteractCommandSystem@@UEAA@XZ
    virtual ~AgentInteractCommandSystem() = default;

    // vIndex: 2, symbol: ?tick@AgentInteractCommandSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
