#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector_base.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionTrigger;
class Block;
class DefinitionTrigger;
class EventResponse;
class ItemStackBase;
class RenderParams;
struct ActorDefinitionEventStackEntry;
struct VariantParameterList;
// clang-format on

namespace ExternalHandlers {
// functions
// NOLINTBEGIN
MCNAPI void executeActorTrigger(
    ::Actor&                                                        actor,
    ::ActorDefinitionTrigger const&                                 actorTrigger,
    ::Bedrock::small_vector_base<::ActorDefinitionEventStackEntry>& eventStack,
    ::VariantParameterList const&                                   params
);

MCNAPI void executeBlockEvent(::Block const* block, ::std::string const& name, ::RenderParams& params);

MCNAPI void executeBlockTrigger(::Block const& block, ::DefinitionTrigger const& trigger, ::RenderParams& params);

MCNAPI void executeEventResponse(::EventResponse const& response, ::RenderParams& params);

MCNAPI bool executeItemStackEvent(::ItemStackBase& item, ::std::string const& name, ::RenderParams& params);
// NOLINTEND

} // namespace ExternalHandlers
