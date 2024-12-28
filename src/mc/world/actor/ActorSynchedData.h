#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/PaletteColor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class SynchedActorDataEntityWrapper;
struct ActorUniqueID;
namespace mce { class Color; }
// clang-format on

namespace ActorSynchedData {
// functions
// NOLINTBEGIN
MCAPI void updateAction(::Actor& actor);

MCAPI void updateAlwaysShowNameTag(::EntityContext& entity, ::SynchedActorDataEntityWrapper const& entityData);

MCAPI void updateAmbientSound(::EntityContext& entity);

MCAPI void updateBoundingBox(::EntityContext& entity, ::SynchedActorDataEntityWrapper const& entityData);

MCAPI void updateBuoyancyData(::EntityContext& entity, ::SynchedActorDataEntityWrapper const& entityData);

MCAPI void updateCommandBlock(::Actor& actor, int dataId, ::std::string& filteredNameTag);

MCAPI void updateContainer(::Actor& actor);

MCAPI void updateHasNPC(::Actor& actor);

MCAPI void updateHeartbeat(::EntityContext& entity);

MCAPI void updateHitbox(::EntityContext& entity, ::SynchedActorDataEntityWrapper const& entityData);

MCAPI void updateInteractText(::Actor& actor);

MCAPI void updateIsBuoyant(::EntityContext& entity, ::SynchedActorDataEntityWrapper& entityData);

MCAPI void updateNPCData(::Actor& actor);

MCAPI void updateNameTag(::Actor& actor);

MCAPI void updateRawNameText(::Actor& actor);

MCAPI void updateRuntimeID(::Actor& actor);

MCAPI void updateSize(::Actor& actor);

MCAPI void updateTarget(::Actor& actor, ::ActorUniqueID& target);

MCAPI void updateTintColor(::mce::Color& tintColor, ::PaletteColor const& paletteColor);
// NOLINTEND

} // namespace ActorSynchedData
