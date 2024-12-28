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
MCAPI ::Rotation getRandomRotation(::Random& random);

MCAPI ::Rotation getRotated(::Rotation original, ::Rotation rotation);

MCAPI ::std::vector<::Rotation> getShuffledRotations(::Random& random);

MCAPI ::BlockPos rotate(::BlockPos const& source, ::Rotation rotation);

MCAPI uchar rotate(::Rotation source, uchar direction);
// NOLINTEND

} // namespace RotationUtil
