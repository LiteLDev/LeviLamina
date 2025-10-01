#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/leashable_utility/UnleashReason.h"
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class LeashableComponent;
class Player;
struct ActorUniqueID;
struct LeashablePreset;
// clang-format on

namespace LeashableUtility {
// functions
// NOLINTBEGIN
MCNAPI bool attemptCutInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

MCNAPI bool canStayLeashedTo(::Actor const& actor, ::Actor const& leashHolder, float maxDistance);

MCNAPI ::std::vector<::gsl::not_null<::Actor*>> getCuttableLeashedActors(::Actor& actor, ::Player const* player);

MCNAPI ::LeashablePreset const&
getPreset(::Actor const& leashedActor, ::LeashableComponent const& leashableComponent, ::Actor const* leashHolder);

MCNAPI bool isAboveHardDistance(::Actor const& actor);

MCNAPI void leash(::Actor& entityToLeash, ::Actor& leashHolder, bool emitGameEvent, bool executeEntityEvent);

MCNAPI void onLeashHolderSet(::ActorUniqueID const& newLeashHolderID, ::Actor& actor);

MCNAPI bool tryTransferLeashedActors(
    ::brstd::flat_set<::ActorUniqueID, ::std::less<::ActorUniqueID>, ::std::vector<::ActorUniqueID>> const&
             leashedActorIDs,
    ::Actor& newLeashHolder
);

MCNAPI void unleash(::Actor& entityToUnleash, ::LeashableUtility::UnleashReason unleashReason);
// NOLINTEND

} // namespace LeashableUtility
