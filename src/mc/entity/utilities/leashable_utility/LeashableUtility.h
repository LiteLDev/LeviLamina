#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/leashable_utility/UnleashReason.h"

// auto generated forward declare list
// clang-format off
class Actor;
class LeashableComponent;
struct ActorUniqueID;
// clang-format on

namespace LeashableUtility {
// functions
// NOLINTBEGIN
MCNAPI bool
canStayLeashedTo(::Actor const& actor, ::Actor const& leashHolder, ::LeashableComponent const& leashableComponent);

MCNAPI bool isBeingPulledByLeash(::Actor const& actor);

MCNAPI void leash(::Actor& entityToLeash, ::Actor& leashHolder, bool emitGameEvent);

MCNAPI void onLeashHolderSet(::Actor& actor, ::ActorUniqueID const& newLeashHolderID);

MCNAPI void unleash(::Actor& entityToUnleash, ::LeashableUtility::UnleashReason unleashReason);
// NOLINTEND

} // namespace LeashableUtility
