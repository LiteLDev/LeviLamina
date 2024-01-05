#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace AgentComponents::Actions { struct Attack; }
namespace AgentComponents::Actions { struct Collect; }
namespace AgentComponents::Actions { struct Drop; }
namespace AgentComponents::Actions { struct DropAll; }
namespace AgentComponents::Actions { struct InspectData; }
namespace AgentComponents::Actions { struct InspectItemCount; }
namespace AgentComponents::Actions { struct InspectItemDetail; }
namespace AgentComponents::Actions { struct InspectItemSpace; }
namespace AgentComponents::Actions { struct PlaceBlock; }
namespace AgentComponents::Actions { struct QueueItem; }
namespace AgentComponents::Actions { struct Till; }
namespace AgentComponents::Actions { struct TransferItemTo; }
namespace AgentComponents::Actions { struct Turn; }
// clang-format on

namespace AgentComponents::Actions {
// NOLINTBEGIN
// symbol: ?_startAction@Actions@AgentComponents@@YAXAEAVEntityContext@@W4CurrentCmdVersion@@AEBUAttack@12@@Z
MCAPI void
_startAction(class EntityContext& entity, ::CurrentCmdVersion, struct AgentComponents::Actions::Attack const& action);

// symbol: ?_startAction@Actions@AgentComponents@@YAXAEAVEntityContext@@W4CurrentCmdVersion@@AEBUCollect@12@@Z
MCAPI void
_startAction(class EntityContext& entity, ::CurrentCmdVersion, struct AgentComponents::Actions::Collect const& action);

// symbol: ?_startAction@Actions@AgentComponents@@YAXAEAVEntityContext@@W4CurrentCmdVersion@@AEBUDrop@12@@Z
MCAPI void
_startAction(class EntityContext& entity, ::CurrentCmdVersion, struct AgentComponents::Actions::Drop const& action);

// symbol: ?_startAction@Actions@AgentComponents@@YAXAEAVEntityContext@@W4CurrentCmdVersion@@AEBUDropAll@12@@Z
MCAPI void
_startAction(class EntityContext& entity, ::CurrentCmdVersion, struct AgentComponents::Actions::DropAll const& action);

// symbol: ?_startAction@Actions@AgentComponents@@YAXAEAVEntityContext@@W4CurrentCmdVersion@@AEBUInspectData@12@@Z
MCAPI void _startAction(
    class EntityContext& entity,
    ::CurrentCmdVersion,
    struct AgentComponents::Actions::InspectData const& action
);

// symbol: ?_startAction@Actions@AgentComponents@@YAXAEAVEntityContext@@W4CurrentCmdVersion@@AEBUInspectItemCount@12@@Z
MCAPI void _startAction(
    class EntityContext& entity,
    ::CurrentCmdVersion,
    struct AgentComponents::Actions::InspectItemCount const& action
);

// symbol: ?_startAction@Actions@AgentComponents@@YAXAEAVEntityContext@@W4CurrentCmdVersion@@AEBUInspectItemDetail@12@@Z
MCAPI void _startAction(
    class EntityContext& entity,
    ::CurrentCmdVersion,
    struct AgentComponents::Actions::InspectItemDetail const& action
);

// symbol: ?_startAction@Actions@AgentComponents@@YAXAEAVEntityContext@@W4CurrentCmdVersion@@AEBUInspectItemSpace@12@@Z
MCAPI void _startAction(
    class EntityContext& entity,
    ::CurrentCmdVersion,
    struct AgentComponents::Actions::InspectItemSpace const& action
);

// symbol: ?_startAction@Actions@AgentComponents@@YAXAEAVEntityContext@@W4CurrentCmdVersion@@AEBUPlaceBlock@12@@Z
MCAPI void _startAction(
    class EntityContext& entity,
    ::CurrentCmdVersion,
    struct AgentComponents::Actions::PlaceBlock const& action
);

// symbol: ?_startAction@Actions@AgentComponents@@YAXAEAVEntityContext@@W4CurrentCmdVersion@@AEBUTill@12@@Z
MCAPI void
_startAction(class EntityContext& entity, ::CurrentCmdVersion, struct AgentComponents::Actions::Till const& action);

// symbol: ?_startAction@Actions@AgentComponents@@YAXAEAVEntityContext@@W4CurrentCmdVersion@@AEBUTransferItemTo@12@@Z
MCAPI void _startAction(
    class EntityContext& entity,
    ::CurrentCmdVersion,
    struct AgentComponents::Actions::TransferItemTo const& action
);

// symbol: ?_startAction@Actions@AgentComponents@@YAXAEAVEntityContext@@W4CurrentCmdVersion@@AEBUTurn@12@@Z
MCAPI void
_startAction(class EntityContext& entity, ::CurrentCmdVersion, struct AgentComponents::Actions::Turn const& action);
// NOLINTEND

}; // namespace AgentComponents::Actions
