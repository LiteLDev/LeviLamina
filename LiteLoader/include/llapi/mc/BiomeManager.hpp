/**
 * @file  BiomeManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BiomeComponentFactory.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BiomeManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEMANAGER
public:
    class BiomeManager& operator=(class BiomeManager const &) = delete;
    BiomeManager(class BiomeManager const &) = delete;
    BiomeManager() = delete;
#endif

public:
    /**
     * @symbol ??0BiomeManager\@\@QEAA\@V?$unique_ptr\@VBiomeRegistry\@\@U?$default_delete\@VBiomeRegistry\@\@\@std\@\@\@std\@\@W4FactoryScope\@BiomeComponentFactory\@\@_NV?$unique_ptr\@VAutomaticFeatureRules\@\@U?$default_delete\@VAutomaticFeatureRules\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI BiomeManager(std::unique_ptr<class BiomeRegistry>, enum class BiomeComponentFactory::FactoryScope, bool, std::unique_ptr<class AutomaticFeatureRules>);
    /**
     * @symbol ?getBiomeComponentFactory\@BiomeManager\@\@QEAAAEAVBiomeComponentFactory\@\@XZ
     */
    MCAPI class BiomeComponentFactory & getBiomeComponentFactory();
    /**
     * @symbol ?getBiomeRegistry\@BiomeManager\@\@QEAAAEAVBiomeRegistry\@\@XZ
     */
    MCAPI class BiomeRegistry & getBiomeRegistry();
    /**
     * @symbol ?getSurfaceBuilderRegistry\@BiomeManager\@\@QEAAAEAVSurfaceBuilderRegistry\@\@XZ
     */
    MCAPI class SurfaceBuilderRegistry & getSurfaceBuilderRegistry();
    /**
     * @symbol ?initializeBiomeRegistryAndAutomaticFeatureRulesOnServer\@BiomeManager\@\@QEAAXAEBVExperiments\@\@AEAVIWorldRegistriesProvider\@\@AEAVResourcePackManager\@\@VLevelSeed64\@\@\@Z
     */
    MCAPI void initializeBiomeRegistryAndAutomaticFeatureRulesOnServer(class Experiments const &, class IWorldRegistriesProvider &, class ResourcePackManager &, class LevelSeed64);
    /**
     * @symbol ?initializeWithLevelStorageManager\@BiomeManager\@\@QEAAXAEAVLevelStorageManager\@\@\@Z
     */
    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager &);
    /**
     * @symbol ?loadBiomeData\@BiomeManager\@\@QEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void loadBiomeData(class LevelStorage &);
    /**
     * @symbol ?sendLevelBiomesRegistered\@BiomeManager\@\@QEAAXXZ
     */
    MCAPI void sendLevelBiomesRegistered();
    /**
     * @symbol ??1BiomeManager\@\@QEAA\@XZ
     */
    MCAPI ~BiomeManager();
    /**
     * @symbol ?use3DBiomeMaps\@BiomeManager\@\@SA_NAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static bool use3DBiomeMaps(class BaseGameVersion const &);

};
