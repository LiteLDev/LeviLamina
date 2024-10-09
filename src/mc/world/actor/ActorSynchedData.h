#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/PaletteColor.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ActorSynchedData {
// NOLINTBEGIN
MCAPI void updateAction(class Actor& actor);

MCAPI void updateAlwaysShowNameTag(class EntityContext& entity, class SynchedActorDataEntityWrapper const& entityData);

MCAPI void updateAmbientSound(class EntityContext& entity);

MCAPI void updateBoundingBox(class EntityContext& entity, class SynchedActorDataEntityWrapper const& entityData);

MCAPI void updateBuoyancyData(class EntityContext& entity, class SynchedActorDataEntityWrapper const& entityData);

MCAPI void updateCommandBlock(class Actor& actor, int dataId, std::string& filteredNameTag);

MCAPI void updateContainer(class Actor& actor);

MCAPI void updateHasNPC(class Actor& actor);

MCAPI void updateHeartbeat(class EntityContext& entity);

MCAPI void updateHitbox(class EntityContext& entity, class SynchedActorDataEntityWrapper const& entityData);

MCAPI void updateInteractText(class Actor& actor);

MCAPI void updateIsBuoyant(class EntityContext& entity, class SynchedActorDataEntityWrapper& entityData);

MCAPI void updateNPCData(class Actor& actor);

MCAPI void updateNameTag(class Actor& actor);

MCAPI void updateRawNameText(class Actor& actor);

MCAPI void updateRuntimeID(class Actor& actor);

MCAPI void updateSize(class Actor& actor);

MCAPI void updateTarget(class Actor& actor, struct ActorUniqueID& target);

MCAPI void updateTintColor(class mce::Color& tintColor, ::PaletteColor const& paletteColor);
// NOLINTEND

}; // namespace ActorSynchedData
