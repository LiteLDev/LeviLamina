#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AgentAnimationSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AgentAnimationSystem& operator=(AgentAnimationSystem const&) = delete;
    AgentAnimationSystem(AgentAnimationSystem const&)            = delete;
    AgentAnimationSystem()                                       = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@AgentAnimationSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
