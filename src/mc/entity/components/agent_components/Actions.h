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
// functions
// NOLINTBEGIN
MCNAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::Attack const& action);

MCNAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::Collect const& action);

MCNAPI void _startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::Drop const& action);

MCNAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::DropAll const& action);

MCNAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::InspectData const& action);

MCNAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::InspectItemCount const& action);

MCNAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::InspectItemDetail const& action);

MCNAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::InspectItemSpace const& action);

MCNAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::PlaceBlock const& action);

MCNAPI void _startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::Till const& action);

MCNAPI void
_startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::TransferItemTo const& action);

MCNAPI void _startAction(::EntityContext& entity, ::CurrentCmdVersion, ::AgentComponents::Actions::Turn const& action);

MCNAPI void startAction(::EntityContext& entity, ::AgentComponents::Actions::QueueItem const& item);
// NOLINTEND

} // namespace AgentComponents::Actions
