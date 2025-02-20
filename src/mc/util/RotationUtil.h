#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

namespace RotationUtil {
// functions
// NOLINTBEGIN
MCAPI ::Rotation getRotated(::Rotation original, ::Rotation rotation);

MCAPI ::std::vector<::Rotation> getShuffledRotations(::Random& random);

MCAPI uchar rotate(::Rotation source, uchar direction);
// NOLINTEND

} // namespace RotationUtil
