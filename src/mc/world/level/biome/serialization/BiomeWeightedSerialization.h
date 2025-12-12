#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
struct BiomeStringList;
struct BiomeWeightedData;
// clang-format on

namespace BiomeWeightedSerialization {
// functions
// NOLINTBEGIN
MCNAPI void applySerializedBiomeWeightedDataVector(
    ::std::vector<::BiomeWeightedData> const&         data,
    ::std::vector<::std::pair<::Biome const*, uint>>& weightedBiomeVector,
    ::BiomeRegistry const&                            biomeRegistry,
    ::BiomeStringList const&                          stringList
);

MCNAPI void serializeBiomeWeightedDataVector(
    ::std::vector<::std::pair<::Biome const*, uint>> const& weightedBiomeVector,
    ::std::vector<::BiomeWeightedData>&                     data,
    ::BiomeStringList&                                      stringList
);
// NOLINTEND

} // namespace BiomeWeightedSerialization
