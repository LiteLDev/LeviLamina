#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class Move; }
namespace AgentComponents { struct ActionDetails; }
// clang-format on

class AgentMoveCommandSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AgentMoveCommandSystem& operator=(AgentMoveCommandSystem const&);
    AgentMoveCommandSystem(AgentMoveCommandSystem const&);
    AgentMoveCommandSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~AgentMoveCommandSystem();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@AgentMoveCommandSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // symbol: ?cleanUp@AgentMoveCommandSystem@@SAXAEAVEntityContext@@M@Z
    MCAPI static void cleanUp(class EntityContext&, float);

    // symbol:
    // ?initialize@AgentMoveCommandSystem@@SAXAEAVEntityContext@@AEAUActionDetails@AgentComponents@@AEAVMove@4@@Z
    MCAPI static void
    initialize(class EntityContext&, struct AgentComponents::ActionDetails&, class AgentComponents::Move&);

    // symbol: ?tickMove@AgentMoveCommandSystem@@SAXAEAVEntityContext@@AEAUActionDetails@AgentComponents@@AEAVMove@4@@Z
    MCAPI static void
    tickMove(class EntityContext&, struct AgentComponents::ActionDetails&, class AgentComponents::Move&);

    // NOLINTEND
};
