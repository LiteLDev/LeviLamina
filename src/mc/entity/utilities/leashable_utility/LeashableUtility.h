#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/leashable_utility/UnleashReason.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class InteractionResult;
class LeashableComponent;
class Player;
class Vec3;
struct ActorUniqueID;
struct LeashablePreset;
// clang-format on

namespace LeashableUtility {
// functions
// NOLINTBEGIN
MCNAPI ::InteractionResult attemptCutInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

MCNAPI bool canLeashBeStolen(::Actor& actor);

MCNAPI bool canStayLeashedTo(::Actor const& actor, ::Actor const& leashHolder, float maxDistance);

MCNAPI void forEachLeashedActor(::Actor const& leashHolder, ::brstd::function_ref<void(::Actor&)> callback);

MCNAPI ::std::vector<::gsl::not_null<::Actor*>> getCuttableLeashedActors(::Actor& actor, ::Player const* player);

MCNAPI float getDistanceSquared(::Actor const& actor, ::Vec3 const& position);

MCNAPI ::Vec3 getFromToVector(::Actor const& actor1, ::Actor const& actor2);

MCNAPI uint getLeashedActorCount(::Actor const& leashHolder);

MCNAPI ::LeashablePreset const&
getPreset(::Actor const& leashedActor, ::LeashableComponent const& leashableComponent, ::Actor const* leashHolder);

MCNAPI bool isAboveHardDistance(::Actor const& actor);

MCNAPI bool isBeingPulledByLeash(::Actor const& actor);

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
