#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class BlockPalette;
class FeatureRegistry;
struct BiomeDefinitionData;
struct BiomeStringList;
struct BiomeTagIDType;
struct BiomeTagSetIDType;
// clang-format on

namespace BiomeDefinitionListUtils {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI void applyBiomeData(
    ::std::map<ushort, ::BiomeDefinitionData> const&                          biomeData,
    ::BiomeStringList const&                                                  stringList,
    ::std::function<void(
        ::BiomeDefinitionData const&,
        ::Biome&,
        ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>&,
        ::BlockPalette const&,
        ::BiomeRegistry const&,
        ::FeatureRegistry&,
        ::BiomeStringList const&
    )> const&                                                                 applyDataToBiomeFunc,
    ::BiomeRegistry&                                                          biomeRegistry,
    ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>& tagRegistry,
    ::BlockPalette const&                                                     blockPalette,
    ::FeatureRegistry&                                                        featureRegistry
);
#endif

MCNAPI void populateBiomeData(
    ::std::map<ushort, ::BiomeDefinitionData>&                                      biomeDataMap,
    ::BiomeStringList&                                                              stringList,
    bool                                                                            enableCSCG,
    ::std::function<void(
        ::Biome const&,
        ::BiomeDefinitionData&,
        bool,
        ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>> const&,
        ::FeatureRegistry const&,
        ::BiomeStringList&
    )> const&                                                                       serializeBiomeFunc,
    ::BiomeRegistry const&                                                          biomeRegistry,
    ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>> const& tagRegistry,
    ::FeatureRegistry const&                                                        featureRegistry
);
// NOLINTEND

} // namespace BiomeDefinitionListUtils
