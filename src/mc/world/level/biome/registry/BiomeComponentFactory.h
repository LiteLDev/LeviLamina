#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BiomeComponentFactory {
public:
    // BiomeComponentFactory inner types declare
    // clang-format off

    // clang-format on

    // BiomeComponentFactory inner types define
    enum class FactoryScope {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMECOMPONENTFACTORY
public:
    BiomeComponentFactory& operator=(BiomeComponentFactory const&) = delete;
    BiomeComponentFactory(BiomeComponentFactory const&)            = delete;
    BiomeComponentFactory()                                        = delete;
#endif

public:
    /**
     * @symbol ??0BiomeComponentFactory\@\@QEAA\@W4FactoryScope\@0\@\@Z
     */
    MCAPI BiomeComponentFactory(enum class BiomeComponentFactory::FactoryScope);
    /**
     * @symbol
     * ?processDataComponents\@BiomeComponentFactory\@\@QEBAXAEAVBiome\@\@AEAVIWorldRegistriesProvider\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI void processDataComponents(class Biome&, class IWorldRegistriesProvider&, class CompoundTag&) const;
    /**
     * @symbol ?registrationFinished\@BiomeComponentFactory\@\@QEAAXXZ
     */
    MCAPI void registrationFinished();
};
