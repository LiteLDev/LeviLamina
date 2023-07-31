#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LevelProvider {
// NOLINTBEGIN
/**
 * @symbol ?initializeGlobalComponents\@LevelProvider\@\@YAXAEAVEntityRegistry\@\@\@Z
 */
MCAPI void initializeGlobalComponents(class EntityRegistry&);
/**
 * @symbol
 * ?registerExternalDataComponent\@LevelProvider\@\@YAXAEAVEntityRegistry\@\@V?$unique_ptr\@UExternalDataInterface\@\@U?$default_delete\@UExternalDataInterface\@\@\@std\@\@\@std\@\@\@Z
 */
MCAPI void registerExternalDataComponent(class EntityRegistry&, std::unique_ptr<struct ExternalDataInterface>);
/**
 * @symbol ?registerLevelGlobalComponents\@LevelProvider\@\@YAXAEAVEntityRegistry\@\@AEAVILevel\@\@\@Z
 */
MCAPI void registerLevelGlobalComponents(class EntityRegistry&, class ILevel&);
/**
 * @symbol ?removeGlobalComponents\@LevelProvider\@\@YAXAEAVEntityRegistry\@\@\@Z
 */
MCAPI void removeGlobalComponents(class EntityRegistry&);
/**
 * @symbol ?unregisterLevelGlobalComponents\@LevelProvider\@\@YAXAEAVEntityRegistry\@\@\@Z
 */
MCAPI void unregisterLevelGlobalComponents(class EntityRegistry&);
// NOLINTEND

}; // namespace LevelProvider
