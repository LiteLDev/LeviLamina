#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BiomeComponentFactory {
public:
    // BiomeComponentFactory inner types define
    enum class FactoryScope {};

public:
    // prevent constructor by default
    BiomeComponentFactory& operator=(BiomeComponentFactory const&);
    BiomeComponentFactory(BiomeComponentFactory const&);
    BiomeComponentFactory();

public:
    // NOLINTBEGIN
    MCAPI void registrationFinished();

    MCAPI void writeComponentsToTag(
        class Biome const&                    biome,
        class IWorldRegistriesProvider const& lookupProvider,
        class CompoundTag&                    tag
    ) const;

    // NOLINTEND
};
