#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

namespace StructureFeatureTypeNames {
// NOLINTBEGIN
MCAPI std::string const& dealiasFeatureName(std::string const&);

MCAPI std::string_view getFeatureName(::StructureFeatureType featureType);

MCAPI std::map<std::string, std::string> const& getFeatureNameAliasesMap();

MCAPI ::StructureFeatureType getFeatureType(std::string const& featureName);
// NOLINTEND

}; // namespace StructureFeatureTypeNames
