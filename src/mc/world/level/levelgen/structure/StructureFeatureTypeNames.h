#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace StructureFeatureTypeNames {
// functions
// NOLINTBEGIN
MCAPI ::std::string const& dealiasFeatureName(::std::string const& aliasedFeatureName);

MCAPI ::std::map<::std::string, ::std::string> const& getFeatureNameAliasesMap();
// NOLINTEND

} // namespace StructureFeatureTypeNames
