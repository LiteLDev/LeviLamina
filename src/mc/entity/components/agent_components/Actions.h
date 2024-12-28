#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace AgentComponents::Actions { struct Attack; }
namespace AgentComponents::Actions { struct Collect; }
namespace AgentComponents::Actions { struct DetectObstacle; }
namespace AgentComponents::Actions { struct DetectRedstone; }
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
// functions
// NOLINTBEGIN
MCAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::InspectItemSpace const& action);

MCAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::DropAll const& action);

MCAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::DetectObstacle const& action);

MCAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::InspectItemDetail const& action);

MCAPI void _startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::Turn const& action);

MCAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::InspectItemCount const& action);

MCAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::PlaceBlock const& action);

MCAPI void _startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::Till const& action);

MCAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::InspectData const& action);

MCAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::TransferItemTo const& action);

MCAPI void _startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::Attack const& action);

MCAPI void _startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::Drop const& action);

MCAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::DetectRedstone const& action);

MCAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::Collect const& action);

MCAPI void startAction(::EntityContext& entity, ::AgentComponents::Actions::QueueItem const& item);
// NOLINTEND

} // namespace AgentComponents::Actions
