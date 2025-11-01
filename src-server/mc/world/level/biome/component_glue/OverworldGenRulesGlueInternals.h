#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/biome/components/OverworldGenerationRulesBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
// clang-format on

namespace OverworldGenRulesGlueInternals {
// functions
// NOLINTBEGIN
MCAPI void applyWeightedBiomes(::std::vector<::std::pair<::Biome const*, uint>>& targetVector, ::std::vector<::gsl::not_null<::Biome const*>> const& biomePtrVector, ::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector const& jsonBiomeVector);

MCAPI bool resolveAndValidate(::std::vector<::gsl::not_null<::Biome const*>>& biomePtrVector, ::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector const& jsonVector, ::BiomeRegistry const& biomeRegistry);
// NOLINTEND

}
