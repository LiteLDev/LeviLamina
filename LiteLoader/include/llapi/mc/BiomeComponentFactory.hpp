/**
 * @file  BiomeComponentFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   -655114715
     * @symbol  ??0BiomeComponentFactory\@\@QEAA\@W4FactoryScope\@0\@\@Z
     */
    MCAPI BiomeComponentFactory(enum class BiomeComponentFactory::FactoryScope);
    /**
     * @hash   1163931026
     * @symbol  ?processDataComponents\@BiomeComponentFactory\@\@QEBAXAEAVBiome\@\@AEAVIWorldRegistriesProvider\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI void processDataComponents(class Biome &, class IWorldRegistriesProvider &, class CompoundTag &) const;
    /**
     * @hash   880696739
     * @symbol  ?processDataComponents\@BiomeComponentFactory\@\@QEBAXAEAVBiome\@\@AEAVIWorldRegistriesProvider\@\@AEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void processDataComponents(class Biome &, class IWorldRegistriesProvider &, class Json::Value &, class SemVersion const &) const;
    /**
     * @hash   -969449351
     * @symbol  ?registrationFinished\@BiomeComponentFactory\@\@QEAAXXZ
     */
    MCAPI void registrationFinished();

};