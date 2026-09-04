#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/WorldGenClimateMappingAttributes.h"

// auto generated forward declare list
// clang-format off
struct BiomeWeightedTemperatureData;
// clang-format on

namespace BiomeWeightedTemperatureSerialization {
// functions
// NOLINTBEGIN
MCAPI void applySerializedBiomeWeightedTemperatureDataVector(
    ::std::vector<::BiomeWeightedTemperatureData> const&                            data,
    ::std::vector<::WorldGenClimateMappingAttributes::WeightedTemperatureCategory>& weightedTemperatures
);

MCAPI void serializeBiomeWeightedTemperatureDataVector(
    ::std::vector<::WorldGenClimateMappingAttributes::WeightedTemperatureCategory> const& weightedTemperatures,
    ::std::vector<::BiomeWeightedTemperatureData>&                                        data
);
// NOLINTEND

} // namespace BiomeWeightedTemperatureSerialization
