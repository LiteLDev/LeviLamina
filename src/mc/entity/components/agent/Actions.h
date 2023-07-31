#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents::Actions { struct Attack; }
namespace AgentComponents::Actions { struct Collect; }
namespace AgentComponents::Actions { struct Destroy; }
namespace AgentComponents::Actions { struct Drop; }
namespace AgentComponents::Actions { struct DropAll; }
namespace AgentComponents::Actions { struct Inspect; }
namespace AgentComponents::Actions { struct InspectData; }
namespace AgentComponents::Actions { struct InspectItemCount; }
namespace AgentComponents::Actions { struct InspectItemDetail; }
namespace AgentComponents::Actions { struct InspectItemSpace; }
namespace AgentComponents::Actions { struct Interact; }
namespace AgentComponents::Actions { struct PlaceBlock; }
namespace AgentComponents::Actions { struct Till; }
namespace AgentComponents::Actions { struct TransferItemTo; }
namespace AgentComponents::Actions { struct Turn; }
// clang-format on

namespace AgentComponents::Actions {
// NOLINTBEGIN
/**
 * @symbol
 * ?_startAction\@Actions\@AgentComponents\@\@YAXAEAVEntityContext\@\@W4CurrentCmdVersion\@\@AEBUPlaceBlock\@12\@\@Z
 */
MCAPI void
_startAction(class EntityContext&, enum class CurrentCmdVersion, struct AgentComponents::Actions::PlaceBlock const&);
/**
 * @symbol
 * ?_startAction\@Actions\@AgentComponents\@\@YAXAEAVEntityContext\@\@W4CurrentCmdVersion\@\@AEBUDestroy\@12\@\@Z
 */
MCAPI void
_startAction(class EntityContext&, enum class CurrentCmdVersion, struct AgentComponents::Actions::Destroy const&);
/**
 * @symbol
 * ?_startAction\@Actions\@AgentComponents\@\@YAXAEAVEntityContext\@\@W4CurrentCmdVersion\@\@AEBUInspect\@12\@\@Z
 */
MCAPI void
_startAction(class EntityContext&, enum class CurrentCmdVersion, struct AgentComponents::Actions::Inspect const&);
/**
 * @symbol
 * ?_startAction\@Actions\@AgentComponents\@\@YAXAEAVEntityContext\@\@W4CurrentCmdVersion\@\@AEBUInspectItemSpace\@12\@\@Z
 */
MCAPI void
_startAction(class EntityContext&, enum class CurrentCmdVersion, struct AgentComponents::Actions::InspectItemSpace const&);
/**
 * @symbol
 * ?_startAction\@Actions\@AgentComponents\@\@YAXAEAVEntityContext\@\@W4CurrentCmdVersion\@\@AEBUInteract\@12\@\@Z
 */
MCAPI void
_startAction(class EntityContext&, enum class CurrentCmdVersion, struct AgentComponents::Actions::Interact const&);
/**
 * @symbol
 * ?_startAction\@Actions\@AgentComponents\@\@YAXAEAVEntityContext\@\@W4CurrentCmdVersion\@\@AEBUInspectItemDetail\@12\@\@Z
 */
MCAPI void
_startAction(class EntityContext&, enum class CurrentCmdVersion, struct AgentComponents::Actions::InspectItemDetail const&);
/**
 * @symbol
 * ?_startAction\@Actions\@AgentComponents\@\@YAXAEAVEntityContext\@\@W4CurrentCmdVersion\@\@AEBUDropAll\@12\@\@Z
 */
MCAPI void
_startAction(class EntityContext&, enum class CurrentCmdVersion, struct AgentComponents::Actions::DropAll const&);
/**
 * @symbol
 * ?_startAction\@Actions\@AgentComponents\@\@YAXAEAVEntityContext\@\@W4CurrentCmdVersion\@\@AEBUInspectData\@12\@\@Z
 */
MCAPI void
_startAction(class EntityContext&, enum class CurrentCmdVersion, struct AgentComponents::Actions::InspectData const&);
/**
 * @symbol
 * ?_startAction\@Actions\@AgentComponents\@\@YAXAEAVEntityContext\@\@W4CurrentCmdVersion\@\@AEBUInspectItemCount\@12\@\@Z
 */
MCAPI void
_startAction(class EntityContext&, enum class CurrentCmdVersion, struct AgentComponents::Actions::InspectItemCount const&);
/**
 * @symbol ?_startAction\@Actions\@AgentComponents\@\@YAXAEAVEntityContext\@\@W4CurrentCmdVersion\@\@AEBUTurn\@12\@\@Z
 */
MCAPI void
_startAction(class EntityContext&, enum class CurrentCmdVersion, struct AgentComponents::Actions::Turn const&);
/**
 * @symbol ?_startAction\@Actions\@AgentComponents\@\@YAXAEAVEntityContext\@\@W4CurrentCmdVersion\@\@AEBUTill\@12\@\@Z
 */
MCAPI void
_startAction(class EntityContext&, enum class CurrentCmdVersion, struct AgentComponents::Actions::Till const&);
/**
 * @symbol
 * ?_startAction\@Actions\@AgentComponents\@\@YAXAEAVEntityContext\@\@W4CurrentCmdVersion\@\@AEBUTransferItemTo\@12\@\@Z
 */
MCAPI void
_startAction(class EntityContext&, enum class CurrentCmdVersion, struct AgentComponents::Actions::TransferItemTo const&);
/**
 * @symbol ?_startAction\@Actions\@AgentComponents\@\@YAXAEAVEntityContext\@\@W4CurrentCmdVersion\@\@AEBUAttack\@12\@\@Z
 */
MCAPI void
_startAction(class EntityContext&, enum class CurrentCmdVersion, struct AgentComponents::Actions::Attack const&);
/**
 * @symbol ?_startAction\@Actions\@AgentComponents\@\@YAXAEAVEntityContext\@\@W4CurrentCmdVersion\@\@AEBUDrop\@12\@\@Z
 */
MCAPI void
_startAction(class EntityContext&, enum class CurrentCmdVersion, struct AgentComponents::Actions::Drop const&);
/**
 * @symbol
 * ?_startAction\@Actions\@AgentComponents\@\@YAXAEAVEntityContext\@\@W4CurrentCmdVersion\@\@AEBUCollect\@12\@\@Z
 */
MCAPI void
_startAction(class EntityContext&, enum class CurrentCmdVersion, struct AgentComponents::Actions::Collect const&);
// NOLINTEND

}; // namespace AgentComponents::Actions
