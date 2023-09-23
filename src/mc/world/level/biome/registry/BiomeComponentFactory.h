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
    // symbol:
    // ?processDataComponents@BiomeComponentFactory@@QEBAXAEAVBiome@@AEAVIWorldRegistriesProvider@@AEAVCompoundTag@@@Z
    MCAPI void processDataComponents(class Biome&, class IWorldRegistriesProvider&, class CompoundTag&) const;

    // symbol: ?registrationFinished@BiomeComponentFactory@@QEAAXXZ
    MCAPI void registrationFinished();

    // NOLINTEND
};
