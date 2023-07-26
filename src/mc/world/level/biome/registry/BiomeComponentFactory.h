#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BiomeComponentFactory {
public:
    // BiomeComponentFactory inner types declare
    // clang-format off

    // clang-format on

    // BiomeComponentFactory inner types define
    enum class FactoryScope {};

public:
    // prevent constructor by default
    BiomeComponentFactory& operator=(BiomeComponentFactory const&) = delete;
    BiomeComponentFactory(BiomeComponentFactory const&)            = delete;
    BiomeComponentFactory()                                        = delete;

public:
    /**
     * @symbol ??0BiomeComponentFactory\@\@QEAA\@W4FactoryScope\@0\@\@Z
     */
    MCAPI BiomeComponentFactory(enum class BiomeComponentFactory::FactoryScope); // NOLINT
    /**
     * @symbol
     * ?processDataComponents\@BiomeComponentFactory\@\@QEBAXAEAVBiome\@\@AEAVIWorldRegistriesProvider\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI void processDataComponents(class Biome&, class IWorldRegistriesProvider&, class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?registrationFinished\@BiomeComponentFactory\@\@QEAAXXZ
     */
    MCAPI void registrationFinished(); // NOLINT
};
