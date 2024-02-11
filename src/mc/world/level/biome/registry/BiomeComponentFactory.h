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
    // symbol: ?registrationFinished@BiomeComponentFactory@@QEAAXXZ
    MCAPI void registrationFinished();

    // symbol:
    // ?writeComponentsToTag@BiomeComponentFactory@@QEBAXAEBVBiome@@AEBVIWorldRegistriesProvider@@AEAVCompoundTag@@@Z
    MCAPI void
    writeComponentsToTag(class Biome const&, class IWorldRegistriesProvider const&, class CompoundTag&) const;

    // NOLINTEND
};
