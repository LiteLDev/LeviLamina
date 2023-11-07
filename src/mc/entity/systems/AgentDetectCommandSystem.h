#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class DetectObstacle; }
namespace AgentComponents { class DetectRedstone; }
// clang-format on

class AgentDetectCommandSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AgentDetectCommandSystem& operator=(AgentDetectCommandSystem const&);
    AgentDetectCommandSystem(AgentDetectCommandSystem const&);
    AgentDetectCommandSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AgentDetectCommandSystem@@UEAA@XZ
    virtual ~AgentDetectCommandSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@AgentDetectCommandSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // symbol:
    // ?initializeObstacle@AgentDetectCommandSystem@@SAXAEAVEntityContext@@AEAVDetectObstacle@AgentComponents@@@Z
    MCAPI static void initializeObstacle(class EntityContext&, class AgentComponents::DetectObstacle&);

    // symbol:
    // ?initializeRedstone@AgentDetectCommandSystem@@SAXAEAVEntityContext@@AEAVDetectRedstone@AgentComponents@@@Z
    MCAPI static void initializeRedstone(class EntityContext&, class AgentComponents::DetectRedstone&);

    // NOLINTEND
};
