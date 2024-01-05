#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class CommandCooldown; }
// clang-format on

class AgentCommandSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AgentCommandSystem& operator=(AgentCommandSystem const&);
    AgentCommandSystem(AgentCommandSystem const&);
    AgentCommandSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AgentCommandSystem@@UEAA@XZ
    virtual ~AgentCommandSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@AgentCommandSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // symbol: ?cleanUp@AgentCommandSystem@@SAXAEAVEntityContext@@M@Z
    MCAPI static void cleanUp(class EntityContext& agent, float);

    // symbol: ?initialize@AgentCommandSystem@@SAXAEAVEntityContext@@@Z
    MCAPI static void initialize(class EntityContext& entity);

    // symbol: ?tickAgentCooldown@AgentCommandSystem@@SAXAEAVEntityContext@@AEAVCommandCooldown@AgentComponents@@@Z
    MCAPI static void tickAgentCooldown(class EntityContext& entity, class AgentComponents::CommandCooldown&);

    // symbol: ?tickLegacy@AgentCommandSystem@@SAXAEAVEntityContext@@AEAVAgentCommandComponent@@@Z
    MCAPI static void tickLegacy(class EntityContext& entity, class AgentCommandComponent&);

    // NOLINTEND
};
