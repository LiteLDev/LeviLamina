#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Rotation.h"

namespace RotationUtil {
// NOLINTBEGIN
// symbol: ?getRandomRotation@RotationUtil@@YA?AW4Rotation@@AEAVRandom@@@Z
MCAPI ::Rotation getRandomRotation(class Random& random);

// symbol: ?getRotated@RotationUtil@@YA?AW4Rotation@@W42@0@Z
MCAPI ::Rotation getRotated(::Rotation original, ::Rotation rotation);

// symbol:
// ?getShuffledRotations@RotationUtil@@YA?AV?$vector@W4Rotation@@V?$allocator@W4Rotation@@@std@@@std@@AEAVRandom@@@Z
MCAPI std::vector<::Rotation> getShuffledRotations(class Random& random);

// symbol: ?rotate@RotationUtil@@YA?AVBlockPos@@AEBV2@W4Rotation@@@Z
MCAPI class BlockPos rotate(class BlockPos const& source, ::Rotation rotation);

// symbol: ?rotate@RotationUtil@@YAEW4Rotation@@E@Z
MCAPI uchar rotate(::Rotation source, uchar direction);
// NOLINTEND

}; // namespace RotationUtil
