#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LevelProvider {
/**
 * @symbol ?initializeGlobalComponents\@LevelProvider\@\@YAXAEAVEntityRegistry\@\@\@Z
 */
MCAPI void initializeGlobalComponents(class EntityRegistry&); // NOLINT
/**
 * @symbol
 * ?registerExternalDataComponent\@LevelProvider\@\@YAXAEAVEntityRegistry\@\@V?$unique_ptr\@UExternalDataInterface\@\@U?$default_delete\@UExternalDataInterface\@\@\@std\@\@\@std\@\@\@Z
 */
MCAPI void
registerExternalDataComponent(class EntityRegistry&, std::unique_ptr<struct ExternalDataInterface>); // NOLINT
/**
 * @symbol ?registerLevelGlobalComponents\@LevelProvider\@\@YAXAEAVEntityRegistry\@\@AEAVILevel\@\@\@Z
 */
MCAPI void registerLevelGlobalComponents(class EntityRegistry&, class ILevel&); // NOLINT
/**
 * @symbol ?removeGlobalComponents\@LevelProvider\@\@YAXAEAVEntityRegistry\@\@\@Z
 */
MCAPI void removeGlobalComponents(class EntityRegistry&); // NOLINT
/**
 * @symbol ?unregisterLevelGlobalComponents\@LevelProvider\@\@YAXAEAVEntityRegistry\@\@\@Z
 */
MCAPI void unregisterLevelGlobalComponents(class EntityRegistry&); // NOLINT

}; // namespace LevelProvider
