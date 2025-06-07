#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Biome;
class BiomeRegistry;
class BlockPalette;
class FeatureRegistry;
struct BiomeDefinitionData;
struct BiomeStringList;
struct BiomeTagIDType;
struct BiomeTagSetIDType;
// clang-format on

namespace VanillaBiomeSerialization {
// functions
// NOLINTBEGIN
MCNAPI void applySerializedDataToBiome(
    ::BiomeDefinitionData const&                                              data,
    ::Biome&                                                                  biome,
    ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>& tagRegistry,
    ::BlockPalette const&                                                     blockPalette,
    ::BiomeRegistry const&                                                    biomeRegistry,
    ::FeatureRegistry&                                                        featureRegistry,
    ::BiomeStringList const&                                                  stringList
);

MCNAPI void serializeBiomeToData(
    ::Biome const&                                                                  biome,
    ::BiomeDefinitionData&                                                          data,
    bool                                                                            clientSideChunkGen,
    ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>> const& tagRegistry,
    ::FeatureRegistry const&                                                        featureRegistry,
    ::BaseGameVersion const&                                                        baseGameVersion,
    ::BiomeStringList&                                                              stringList
);
// NOLINTEND

} // namespace VanillaBiomeSerialization
