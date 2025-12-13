#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
struct BlockComponentGroupDescription;
// clang-format on

namespace BlockDefinitionCrossComponentValidation::Detail {
// functions
// NOLINTBEGIN
MCNAPI void constrainRandomOffsetToCollisionBox(::BlockComponentGroupDescription const& blockComponentGroupDescription);

MCNAPI bool validateGeometryAndMaterialComponents(
    ::BlockComponentGroupDescription const& description,
    ::SemVersion const&                     originalJsonVersion
);

MCNAPI bool
validateNoRandomOffsetComponentIfFullCubeGeo(::BlockComponentGroupDescription const& blockComponentGroupDescription);
// NOLINTEND

} // namespace BlockDefinitionCrossComponentValidation::Detail
