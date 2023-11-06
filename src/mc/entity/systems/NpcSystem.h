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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~NpcSystem();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@NpcSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // symbol: ?tickCountdown@NpcSystem@@SAXAEAVEntityContext@@AEAULeaveMenuCountdown@NpcComponents@@@Z
    MCAPI static void tickCountdown(class EntityContext&, struct NpcComponents::LeaveMenuCountdown&);

    // NOLINTEND
};
