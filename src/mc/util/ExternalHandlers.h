#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ExternalHandlers {
// NOLINTBEGIN
MCAPI void executeActorTrigger(
    class Actor&                                                  actor,
    class ActorDefinitionTrigger const&                           actorTrigger,
    std::vector<std::pair<std::string const, std::string const>>& eventStack,
    class VariantParameterList const&                             params
);

MCAPI void executeBlockEvent(class Block const* block, std::string const& name, class RenderParams& params);

MCAPI void
executeBlockTrigger(class Block const& block, class DefinitionTrigger const& trigger, class RenderParams& params);

MCAPI void executeEventResponse(class EventResponse const& response, class RenderParams& params);

MCAPI bool executeItemStackEvent(class ItemStackBase& item, std::string const& name, class RenderParams& params);
// NOLINTEND

}; // namespace ExternalHandlers
