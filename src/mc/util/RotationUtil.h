#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RotationUtil {
/**
 * @symbol ?getRandomRotation\@RotationUtil\@\@YA?AW4Rotation\@\@AEAVRandom\@\@\@Z
 */
MCAPI enum class Rotation getRandomRotation(class Random&); // NOLINT
/**
 * @symbol ?getRotated\@RotationUtil\@\@YA?AW4Rotation\@\@W42\@0\@Z
 */
MCAPI enum class Rotation getRotated(enum class Rotation, enum class Rotation); // NOLINT
/**
 * @symbol
 * ?getShuffledRotations\@RotationUtil\@\@YA?AV?$vector\@W4Rotation\@\@V?$allocator\@W4Rotation\@\@\@std\@\@\@std\@\@AEAVRandom\@\@\@Z
 */
MCAPI std::vector<enum class Rotation> getShuffledRotations(class Random&); // NOLINT
/**
 * @symbol ?rotate\@RotationUtil\@\@YAEW4Rotation\@\@E\@Z
 */
MCAPI unsigned char rotate(enum class Rotation, unsigned char); // NOLINT
/**
 * @symbol ?rotate\@RotationUtil\@\@YA?AVBlockPos\@\@AEBV2\@W4Rotation\@\@\@Z
 */
MCAPI class BlockPos rotate(class BlockPos const&, enum class Rotation); // NOLINT

}; // namespace RotationUtil
