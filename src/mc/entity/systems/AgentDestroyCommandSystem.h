#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AgentDestroyCommandSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AgentDestroyCommandSystem& operator=(AgentDestroyCommandSystem const&);
    AgentDestroyCommandSystem(AgentDestroyCommandSystem const&);
    AgentDestroyCommandSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~AgentDestroyCommandSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@AgentDestroyCommandSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
