#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ExternalHandlers {
// NOLINTBEGIN
MCAPI void
executeActorTrigger(class Actor&, class ActorDefinitionTrigger const&, std::vector<std::pair<std::string const, std::string const>>&, class VariantParameterList const&);

MCAPI void executeBlockEvent(class Block const*, std::string const&, class RenderParams&);

MCAPI void executeBlockTrigger(class Block const&, class DefinitionTrigger const&, class RenderParams&);

MCAPI void executeEventResponse(class EventResponse const&, class RenderParams&);

MCAPI bool executeItemStackEvent(class ItemStackBase&, std::string const&, class RenderParams&);
// NOLINTEND

}; // namespace ExternalHandlers
