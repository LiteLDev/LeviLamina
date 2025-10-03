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
MCNAPI ::Rotation getRotated(::Rotation original, ::Rotation rotation);

MCNAPI ::std::vector<::Rotation> getShuffledRotations(::Random& random);

MCNAPI uchar rotate(::Rotation source, uchar direction);
// NOLINTEND

} // namespace RotationUtil
