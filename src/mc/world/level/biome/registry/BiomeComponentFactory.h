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
    // symbol: ??0BiomeComponentFactory@@QEAA@W4FactoryScope@0@@Z
    MCAPI explicit BiomeComponentFactory(::BiomeComponentFactory::FactoryScope);

    // symbol:
    // ?processDataComponents@BiomeComponentFactory@@QEBAXAEAVBiome@@AEAVIWorldRegistriesProvider@@AEAVCompoundTag@@@Z
    MCAPI void processDataComponents(class Biome&, class IWorldRegistriesProvider&, class CompoundTag&) const;

    // symbol: ?registrationFinished@BiomeComponentFactory@@QEAAXXZ
    MCAPI void registrationFinished();

    // NOLINTEND
};
