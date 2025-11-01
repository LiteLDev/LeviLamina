#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
struct BiomeConditionalTransformationData;
struct BiomeStringList;
struct PossibleTransformation;
// clang-format on

namespace BiomeConditionalTransformationSerialization {
// functions
// NOLINTBEGIN
MCAPI void applySerializedBiomeConditionalTransformationDataVector(::std::vector<::BiomeConditionalTransformationData> const& data, ::std::vector<::PossibleTransformation>& conditionalTransformations, ::BiomeRegistry const& biomeRegistry, ::BiomeStringList const& stringList);

MCAPI void serializeBiomeConditionalTransformationData(::PossibleTransformation const& conditionalTransformation, ::BiomeConditionalTransformationData& data, ::BiomeStringList& stringList);

MCAPI void serializeBiomeConditionalTransformationDataVector(::std::vector<::PossibleTransformation> const& conditionalTransformations, ::std::vector<::BiomeConditionalTransformationData>& data, ::BiomeStringList& stringList);
// NOLINTEND

}
