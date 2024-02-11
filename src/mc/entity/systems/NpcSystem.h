#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
namespace NpcComponents { struct LeaveMenuCountdown; }
// clang-format on

class NpcSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    NpcSystem& operator=(NpcSystem const&);
    NpcSystem(NpcSystem const&);
    NpcSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NpcSystem@@UEAA@XZ
    virtual ~NpcSystem() = default;

    // vIndex: 2, symbol: ?tick@NpcSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // symbol: ?tickCountdown@NpcSystem@@SAXAEAVEntityContext@@AEAULeaveMenuCountdown@NpcComponents@@@Z
    MCAPI static void tickCountdown(class EntityContext& entity, struct NpcComponents::LeaveMenuCountdown&);

    // NOLINTEND
};
