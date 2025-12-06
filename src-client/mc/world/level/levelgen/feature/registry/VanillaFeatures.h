#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
class FeatureRegistry;
class FeatureTypeFactory;
// clang-format on

namespace VanillaFeatures {
// functions
// NOLINTBEGIN
MCAPI void registerFeatureTypes(::FeatureTypeFactory& typeFactories);

MCAPI void registerFeatures(
    ::FeatureRegistry&       registry,
    ::BaseGameVersion const& baseGameVersion,
    ::Experiments const&     experiment
);
// NOLINTEND

} // namespace VanillaFeatures
