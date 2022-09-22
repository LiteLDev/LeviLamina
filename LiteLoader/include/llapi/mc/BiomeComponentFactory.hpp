/**
 * @file  BiomeComponentFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BiomeComponentFactory.
 *
 */
class BiomeComponentFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMECOMPONENTFACTORY
public:
    class BiomeComponentFactory& operator=(class BiomeComponentFactory const &) = delete;
    BiomeComponentFactory(class BiomeComponentFactory const &) = delete;
    BiomeComponentFactory() = delete;
#endif

public:
    /**
     * @hash   -1581165067
     * @symbol ??0BiomeComponentFactory@@QEAA@W4FactoryScope@0@@Z
     */
    MCAPI BiomeComponentFactory(enum BiomeComponentFactory::FactoryScope);
    /**
     * @hash   237865298
     * @symbol ?processDataComponents@BiomeComponentFactory@@QEBAXAEAVBiome@@AEAVIWorldRegistriesProvider@@AEAVCompoundTag@@@Z
     */
    MCAPI void processDataComponents(class Biome &, class IWorldRegistriesProvider &, class CompoundTag &) const;
    /**
     * @hash   -45384365
     * @symbol ?processDataComponents@BiomeComponentFactory@@QEBAXAEAVBiome@@AEAVIWorldRegistriesProvider@@AEAVValue@Json@@AEBVSemVersion@@@Z
     */
    MCAPI void processDataComponents(class Biome &, class IWorldRegistriesProvider &, class Json::Value &, class SemVersion const &) const;
    /**
     * @hash   -1895530455
     * @symbol ?registrationFinished@BiomeComponentFactory@@QEAAXXZ
     */
    MCAPI void registrationFinished();

};