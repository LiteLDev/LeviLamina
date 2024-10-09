#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"

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
MCAPI void
_startAction(class EntityContext& entity, ::CurrentCmdVersion, struct AgentComponents::Actions::Attack const& action);

MCAPI void
_startAction(class EntityContext& entity, ::CurrentCmdVersion, struct AgentComponents::Actions::Collect const& action);

MCAPI void
_startAction(class EntityContext& entity, ::CurrentCmdVersion, struct AgentComponents::Actions::Drop const& action);

MCAPI void
_startAction(class EntityContext& entity, ::CurrentCmdVersion, struct AgentComponents::Actions::DropAll const& action);

MCAPI void _startAction(
    class EntityContext& entity,
    ::CurrentCmdVersion,
    struct AgentComponents::Actions::InspectData const& action
);

MCAPI void _startAction(
    class EntityContext& entity,
    ::CurrentCmdVersion,
    struct AgentComponents::Actions::InspectItemCount const& action
);

MCAPI void _startAction(
    class EntityContext& entity,
    ::CurrentCmdVersion,
    struct AgentComponents::Actions::InspectItemDetail const& action
);

MCAPI void _startAction(
    class EntityContext& entity,
    ::CurrentCmdVersion,
    struct AgentComponents::Actions::InspectItemSpace const& action
);

MCAPI void _startAction(
    class EntityContext& entity,
    ::CurrentCmdVersion,
    struct AgentComponents::Actions::PlaceBlock const& action
);

MCAPI void
_startAction(class EntityContext& entity, ::CurrentCmdVersion, struct AgentComponents::Actions::Till const& action);

MCAPI void _startAction(
    class EntityContext& entity,
    ::CurrentCmdVersion,
    struct AgentComponents::Actions::TransferItemTo const& action
);

MCAPI void
_startAction(class EntityContext& entity, ::CurrentCmdVersion, struct AgentComponents::Actions::Turn const& action);
// NOLINTEND

}; // namespace AgentComponents::Actions
