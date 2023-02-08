/**
 * @file  RotationUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace RotationUtil.
 *
 */
namespace RotationUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -1582135024
     * @symbol  ?getRandomRotation\@RotationUtil\@\@YA?AW4Rotation\@\@AEAVRandom\@\@\@Z
     */
    MCAPI enum class Rotation getRandomRotation(class Random &);
    /**
     * @hash   1743572186
     * @symbol  ?getRotated\@RotationUtil\@\@YA?AW4Rotation\@\@W42\@0\@Z
     */
    MCAPI enum class Rotation getRotated(enum class Rotation, enum class Rotation);
    /**
     * @hash   1152536874
     * @symbol  ?getShuffledRotations\@RotationUtil\@\@YA?AV?$vector\@W4Rotation\@\@V?$allocator\@W4Rotation\@\@\@std\@\@\@std\@\@AEAVRandom\@\@\@Z
     */
    MCAPI std::vector<enum class Rotation> getShuffledRotations(class Random &);
    /**
     * @hash   -294228992
     * @symbol  ?rotate\@RotationUtil\@\@YA?AVBlockPos\@\@AEBV2\@W4Rotation\@\@\@Z
     */
    MCAPI class BlockPos rotate(class BlockPos const &, enum class Rotation);
    /**
     * @hash   1613289359
     * @symbol  ?rotate\@RotationUtil\@\@YAEW4Rotation\@\@E\@Z
     */
    MCAPI unsigned char rotate(enum class Rotation, unsigned char);

};