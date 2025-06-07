#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class LeashableComponent;
struct AddToLeashedEntitiesRequestComponent;
struct LeashablePreset;
// clang-format on

namespace ChooseAndApplyPresetSystem {
// functions
// NOLINTBEGIN
MCNAPI ::LeashablePreset const* choosePreset(::Actor const& leashedActor, ::Actor const& leashHolder);

MCNAPI void tickEntity(
    ::ActorOwnerComponent const&                  actorOwnerComponent,
    ::AddToLeashedEntitiesRequestComponent const& addToLeashedEntitiesRequestComponent,
    ::LeashableComponent&                         leashableComponent
);
// NOLINTEND

} // namespace ChooseAndApplyPresetSystem
