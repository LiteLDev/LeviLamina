#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/world/level/block/PillarAxis.h"

namespace PillarAxisUtils {
// functions
// NOLINTBEGIN
MCAPI uchar mapFaceToAxisDirection(uchar absoluteFace, ::PillarAxis axis);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::Bedrock::DenseEnumMap<::PillarAxis, ::std::string_view, 3> const& AXIS_NAME();
// NOLINTEND

} // namespace PillarAxisUtils
