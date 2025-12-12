#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/FilteredTransformationAttributes.h"
#include "mc/world/level/biome/components/WeightedBiomeAttributes.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class WorldGenClimateMappingAttributes;
struct BiomeOverworldGenRulesData;
struct BiomeStringList;
struct HillsTransformation;
struct MutateBiomeTransformation;
struct PostShoreEdgeTransformation;
struct PreHillsEdgeTransformation;
struct RiverTransformation;
struct ShoreTransformation;
// clang-format on

namespace BiomeOverworldGenRulesSerialization {
// functions
// NOLINTBEGIN
MCAPI void applySerializedOverworldGenRules(
    ::BiomeOverworldGenRulesData const& data,
    ::Biome&                            biome,
    ::BiomeRegistry const&              biomeRegistry,
    ::BiomeStringList const&            stringList
);

MCAPI ::std::optional<::BiomeOverworldGenRulesData> maybeSerializeOverworldGenRules(
    ::WeightedBiomeAttributes<::HillsTransformation> const*                  hills,
    ::WeightedBiomeAttributes<::MutateBiomeTransformation> const*            mutate,
    ::WeightedBiomeAttributes<::RiverTransformation> const*                  river,
    ::WeightedBiomeAttributes<::ShoreTransformation> const*                  shore,
    ::FilteredTransformationAttributes<::PreHillsEdgeTransformation> const*  preHills,
    ::FilteredTransformationAttributes<::PostShoreEdgeTransformation> const* postShore,
    ::WorldGenClimateMappingAttributes const*                                climate,
    ::BiomeStringList&                                                       stringList
);
// NOLINTEND

} // namespace BiomeOverworldGenRulesSerialization
