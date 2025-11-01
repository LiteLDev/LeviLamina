#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class BlockPalette;
class FeatureRegistry;
struct BiomeDefinitionChunkGenData;
struct BiomeStringList;
// clang-format on

namespace BiomeChunkGenSerialization {
// functions
// NOLINTBEGIN
MCAPI void applySerializedChunkGenData(
    ::BiomeDefinitionChunkGenData const& data,
    ::Biome&                             biome,
    ::BlockPalette const&                blockPalette,
    ::BiomeRegistry const&               biomeRegistry,
    ::FeatureRegistry&                   featureRegistry,
    ::BiomeStringList const&             stringList
);

MCAPI void serializeChunkGenData(
    ::Biome const&                 biome,
    ::BiomeDefinitionChunkGenData& data,
    ::FeatureRegistry const&       featureRegistry,
    ::BiomeStringList&             stringList
);
// NOLINTEND

} // namespace BiomeChunkGenSerialization
