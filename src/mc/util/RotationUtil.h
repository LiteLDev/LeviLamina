#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Random;
// clang-format on

namespace RotationUtil {
// functions
// NOLINTBEGIN
MCNAPI ::Rotation getRandomRotation(::Random& random);

MCNAPI ::Rotation getRotated(::Rotation original, ::Rotation rotation);

MCNAPI ::BlockPos rotate(::BlockPos const& source, ::Rotation rotation);

MCNAPI uchar rotate(::Rotation source, uchar direction);
// NOLINTEND

} // namespace RotationUtil
