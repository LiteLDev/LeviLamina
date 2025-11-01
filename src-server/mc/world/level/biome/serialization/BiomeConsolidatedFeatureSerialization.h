#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeDecorationAttributes.h"

// auto generated forward declare list
// clang-format off
class FeatureRegistry;
struct BiomeConsolidatedFeatureData;
struct BiomeConsolidatedFeaturesData;
struct BiomeDecorationFeature;
struct BiomeStringList;
struct ConsolidatedFeatures;
// clang-format on

namespace BiomeConsolidatedFeatureSerialization {
// functions
// NOLINTBEGIN
MCAPI void applySerializedConsolidatedFeature(::BiomeConsolidatedFeatureData const& data, ::BiomeDecorationFeature& consolidatedFeature, ::FeatureRegistry& featureRegistry, ::BiomeStringList const& stringList);

MCAPI ::std::optional<::BiomeConsolidatedFeatureData> serializeConsolidatedFeature(::BiomeDecorationFeature const& consolidatedFeature, ::FeatureRegistry const& featureRegistry, ::BiomeStringList& stringList);

MCAPI void serializeConsolidatedFeaturesData(::BiomeDecorationAttributes<::ConsolidatedFeatures> const& consolidatedFeatures, ::BiomeConsolidatedFeaturesData& data, ::FeatureRegistry const& featureRegistry, ::BiomeStringList& stringList);
// NOLINTEND

}
