#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ActorSynchedData {
/**
 * @symbol ?updateAction\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
 */
MCAPI void updateAction(class Actor&); // NOLINT
/**
 * @symbol ?updateAmbientSound\@ActorSynchedData\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void updateAmbientSound(class EntityContext&); // NOLINT
/**
 * @symbol ?updateBoundingBox\@ActorSynchedData\@\@YAXAEAVEntityContext\@\@AEBVSynchedActorDataEntityWrapper\@\@\@Z
 */
MCAPI void updateBoundingBox(class EntityContext&, class SynchedActorDataEntityWrapper const&); // NOLINT
/**
 * @symbol ?updateBuoyancyData\@ActorSynchedData\@\@YAXAEAVEntityContext\@\@AEBVSynchedActorDataEntityWrapper\@\@\@Z
 */
MCAPI void updateBuoyancyData(class EntityContext&, class SynchedActorDataEntityWrapper const&); // NOLINT
/**
 * @symbol
 * ?updateCommandBlock\@ActorSynchedData\@\@YAXAEAVActor\@\@HAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void updateCommandBlock(class Actor&, int, std::string&); // NOLINT
/**
 * @symbol ?updateContainer\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
 */
MCAPI void updateContainer(class Actor&); // NOLINT
/**
 * @symbol ?updateHasNPC\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
 */
MCAPI void updateHasNPC(class Actor&); // NOLINT
/**
 * @symbol ?updateHeartbeat\@ActorSynchedData\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void updateHeartbeat(class EntityContext&); // NOLINT
/**
 * @symbol ?updateHitbox\@ActorSynchedData\@\@YAXAEAVEntityContext\@\@AEBVSynchedActorDataEntityWrapper\@\@\@Z
 */
MCAPI void updateHitbox(class EntityContext&, class SynchedActorDataEntityWrapper const&); // NOLINT
/**
 * @symbol ?updateInteractText\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
 */
MCAPI void updateInteractText(class Actor&); // NOLINT
/**
 * @symbol ?updateIsBuoyant\@ActorSynchedData\@\@YAXAEAVEntityContext\@\@AEAVSynchedActorDataEntityWrapper\@\@\@Z
 */
MCAPI void updateIsBuoyant(class EntityContext&, class SynchedActorDataEntityWrapper&); // NOLINT
/**
 * @symbol ?updateNPCData\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
 */
MCAPI void updateNPCData(class Actor&); // NOLINT
/**
 * @symbol ?updateNameTag\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
 */
MCAPI void updateNameTag(class Actor&); // NOLINT
/**
 * @symbol ?updateRawNameText\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
 */
MCAPI void updateRawNameText(class Actor&); // NOLINT
/**
 * @symbol ?updateRuntimeID\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
 */
MCAPI void updateRuntimeID(class Actor&); // NOLINT
/**
 * @symbol ?updateSize\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
 */
MCAPI void updateSize(class Actor&); // NOLINT
/**
 * @symbol ?updateTarget\@ActorSynchedData\@\@YAXAEAVActor\@\@AEAUActorUniqueID\@\@\@Z
 */
MCAPI void updateTarget(class Actor&, struct ActorUniqueID&); // NOLINT
/**
 * @symbol ?updateTintColor\@ActorSynchedData\@\@YAXAEAVColor\@mce\@\@AEBW4PaletteColor\@\@\@Z
 */
MCAPI void updateTintColor(class mce::Color&, enum class PaletteColor const&); // NOLINT

}; // namespace ActorSynchedData
