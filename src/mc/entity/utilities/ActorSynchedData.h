#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/PaletteColor.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ActorSynchedData {
// NOLINTBEGIN
// symbol: ?updateAction@ActorSynchedData@@YAXAEAVActor@@@Z
MCAPI void updateAction(class Actor& actor);

// symbol: ?updateAlwaysShowNameTag@ActorSynchedData@@YAXAEAVEntityContext@@AEBVSynchedActorDataEntityWrapper@@@Z
MCAPI void updateAlwaysShowNameTag(class EntityContext&, class SynchedActorDataEntityWrapper const&);

// symbol: ?updateAmbientSound@ActorSynchedData@@YAXAEAVEntityContext@@@Z
MCAPI void updateAmbientSound(class EntityContext& entity);

// symbol: ?updateBoundingBox@ActorSynchedData@@YAXAEAVEntityContext@@AEBVSynchedActorDataEntityWrapper@@@Z
MCAPI void updateBoundingBox(class EntityContext&, class SynchedActorDataEntityWrapper const&);

// symbol: ?updateBuoyancyData@ActorSynchedData@@YAXAEAVEntityContext@@AEBVSynchedActorDataEntityWrapper@@@Z
MCAPI void updateBuoyancyData(class EntityContext& entity, class SynchedActorDataEntityWrapper const& entityData);

// symbol:
// ?updateCommandBlock@ActorSynchedData@@YAXAEAVActor@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI void updateCommandBlock(class Actor& actor, int dataId, std::string&);

// symbol: ?updateContainer@ActorSynchedData@@YAXAEAVActor@@@Z
MCAPI void updateContainer(class Actor& actor);

// symbol: ?updateHasNPC@ActorSynchedData@@YAXAEAVActor@@@Z
MCAPI void updateHasNPC(class Actor& actor);

// symbol: ?updateHeartbeat@ActorSynchedData@@YAXAEAVEntityContext@@@Z
MCAPI void updateHeartbeat(class EntityContext& entity);

// symbol: ?updateHitbox@ActorSynchedData@@YAXAEAVEntityContext@@AEBVSynchedActorDataEntityWrapper@@@Z
MCAPI void updateHitbox(class EntityContext& entity, class SynchedActorDataEntityWrapper const& entityData);

// symbol: ?updateInteractText@ActorSynchedData@@YAXAEAVActor@@@Z
MCAPI void updateInteractText(class Actor& actor);

// symbol: ?updateIsBuoyant@ActorSynchedData@@YAXAEAVEntityContext@@AEAVSynchedActorDataEntityWrapper@@@Z
MCAPI void updateIsBuoyant(class EntityContext& entity, class SynchedActorDataEntityWrapper& entityData);

// symbol: ?updateNPCData@ActorSynchedData@@YAXAEAVActor@@@Z
MCAPI void updateNPCData(class Actor& actor);

// symbol: ?updateNameTag@ActorSynchedData@@YAXAEAVActor@@@Z
MCAPI void updateNameTag(class Actor& actor);

// symbol: ?updateRawNameText@ActorSynchedData@@YAXAEAVActor@@@Z
MCAPI void updateRawNameText(class Actor& actor);

// symbol: ?updateRuntimeID@ActorSynchedData@@YAXAEAVActor@@@Z
MCAPI void updateRuntimeID(class Actor& actor);

// symbol: ?updateSize@ActorSynchedData@@YAXAEAVActor@@@Z
MCAPI void updateSize(class Actor& actor);

// symbol: ?updateTarget@ActorSynchedData@@YAXAEAVActor@@AEAUActorUniqueID@@@Z
MCAPI void updateTarget(class Actor& actor, struct ActorUniqueID& target);

// symbol: ?updateTintColor@ActorSynchedData@@YAXAEAVColor@mce@@AEBW4PaletteColor@@@Z
MCAPI void updateTintColor(class mce::Color& tintColor, ::PaletteColor const&);
// NOLINTEND

}; // namespace ActorSynchedData
