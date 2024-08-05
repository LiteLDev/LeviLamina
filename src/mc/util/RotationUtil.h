#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Rotation.h"

namespace RotationUtil {
// NOLINTBEGIN
MCAPI ::Rotation getRandomRotation(class Random& random);

MCAPI ::Rotation getRotated(::Rotation original, ::Rotation rotation);

MCAPI std::vector<::Rotation> getShuffledRotations(class Random& random);

MCAPI class BlockPos rotate(class BlockPos const& source, ::Rotation rotation);

MCAPI uchar rotate(::Rotation source, uchar direction);
// NOLINTEND

}; // namespace RotationUtil
