/**
 * @file  LevelProvider.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace LevelProvider {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?initializeGlobalComponents\@LevelProvider\@\@YAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void initializeGlobalComponents(class EntityRegistry &);
    /**
     * @symbol ?registerExternalDataComponent\@LevelProvider\@\@YAXAEAVEntityRegistry\@\@V?$unique_ptr\@UExternalDataInterface\@\@U?$default_delete\@UExternalDataInterface\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerExternalDataComponent(class EntityRegistry &, std::unique_ptr<struct ExternalDataInterface>);
    /**
     * @symbol ?registerLevelGlobalComponents\@LevelProvider\@\@YAXAEAVEntityRegistry\@\@AEAVILevel\@\@\@Z
     */
    MCAPI void registerLevelGlobalComponents(class EntityRegistry &, class ILevel &);
    /**
     * @symbol ?removeGlobalComponents\@LevelProvider\@\@YAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void removeGlobalComponents(class EntityRegistry &);
    /**
     * @symbol ?unregisterLevelGlobalComponents\@LevelProvider\@\@YAXAEAVEntityRegistry\@\@\@Z
     */
    MCAPI void unregisterLevelGlobalComponents(class EntityRegistry &);

};