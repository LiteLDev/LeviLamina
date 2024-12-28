#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class HashedString;
// clang-format on

namespace StructureFeatureTypeUtils {
// functions
// NOLINTBEGIN
MCAPI int getVanillaFeatureTypeIndex_DEPRECATED(::HashedString const& type);

MCAPI bool isFeatureTypeAllowedForExperiments(::HashedString, ::Experiments const&);
// NOLINTEND

} // namespace StructureFeatureTypeUtils
