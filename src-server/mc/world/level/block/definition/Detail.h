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
MCAPI void constrainRandomOffsetToCollisionBox(::BlockComponentGroupDescription const& blockComponentGroupDescription);

MCAPI bool validateGeometryAndMaterialComponents(::BlockComponentGroupDescription const& description, ::SemVersion const& originalJsonVersion);

MCAPI bool validateNoRandomOffsetComponentIfFullCubeGeo(::BlockComponentGroupDescription const& blockComponentGroupDescription);
// NOLINTEND

}
