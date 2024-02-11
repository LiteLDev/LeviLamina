#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AgentAnimationSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AgentAnimationSystem& operator=(AgentAnimationSystem const&);
    AgentAnimationSystem(AgentAnimationSystem const&);
    AgentAnimationSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AgentAnimationSystem@@UEAA@XZ
    virtual ~AgentAnimationSystem() = default;

    // vIndex: 2, symbol: ?tick@AgentAnimationSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
