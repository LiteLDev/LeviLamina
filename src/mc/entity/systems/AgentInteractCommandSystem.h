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

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@AgentInteractCommandSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
