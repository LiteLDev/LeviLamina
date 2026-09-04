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
MCAPI ::InteractionResult attemptCutInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

MCAPI bool canLeashBeStolen(::Actor& actor);

MCAPI bool canStayLeashedTo(::Actor const& actor, ::Actor const& leashHolder, float maxDistance);

MCAPI void forEachLeashedActor(::Actor const& leashHolder, ::brstd::function_ref<void(::Actor&)> callback);

MCAPI float getDistanceSquared(::Actor const& actor, ::Vec3 const& position);

MCAPI uint getLeashedActorCount(::Actor const& leashHolder);

MCAPI ::LeashablePreset const&
getPreset(::Actor const& leashedActor, ::LeashableComponent const& leashableComponent, ::Actor const* leashHolder);

MCAPI bool isAboveHardDistance(::Actor const& actor);

MCAPI void leash(::Actor& entityToLeash, ::Actor& leashHolder, bool emitGameEvent, bool executeEntityEvent);

MCAPI void onLeashHolderSet(::ActorUniqueID const& newLeashHolderID, ::Actor& actor);

MCAPI bool tryTransferLeashedActors(
    ::brstd::flat_set<::ActorUniqueID, ::std::less<::ActorUniqueID>, ::std::vector<::ActorUniqueID>> const&
             leashedActorIDs,
    ::Actor& newLeashHolder
);

MCAPI void unleash(::Actor& entityToUnleash, ::LeashableUtility::UnleashReason unleashReason);
// NOLINTEND

} // namespace LeashableUtility
