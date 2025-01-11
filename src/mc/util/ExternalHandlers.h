#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionTrigger;
class Block;
class DefinitionTrigger;
class EventResponse;
class ItemStackBase;
class RenderParams;
struct VariantParameterList;
// clang-format on

namespace ExternalHandlers {
// functions
// NOLINTBEGIN
MCAPI void executeActorTrigger(
    ::Actor&                                                              actor,
    ::ActorDefinitionTrigger const&                                       actorTrigger,
    ::std::vector<::std::pair<::std::string const, ::std::string const>>& eventStack,
    ::VariantParameterList const&                                         params
);

MCAPI void executeBlockEvent(::Block const* block, ::std::string const& name, ::RenderParams& params);

MCAPI void executeBlockTrigger(::Block const& block, ::DefinitionTrigger const& trigger, ::RenderParams& params);

MCFOLD void executeEventResponse(::EventResponse const& response, ::RenderParams& params);

MCAPI bool executeItemStackEvent(::ItemStackBase& item, ::std::string const& name, ::RenderParams& params);
// NOLINTEND

} // namespace ExternalHandlers
