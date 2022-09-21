/**
 * @file  MC/RotationUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1854436320
     * @symbol ?getRandomRotation@RotationUtil@@YA?AW4Rotation@@AEAVRandom@@@Z
     */
    MCAPI enum Rotation getRandomRotation(class Random &);
    /**
     * @hash   885160858
     * @symbol ?getRotated@RotationUtil@@YA?AW4Rotation@@W42@0@Z
     */
    MCAPI enum Rotation getRotated(enum Rotation, enum Rotation);
    /**
     * @hash   294125546
     * @symbol ?getShuffledRotations@RotationUtil@@YA?AV?$vector@W4Rotation@@V?$allocator@W4Rotation@@@std@@@std@@AEAVRandom@@@Z
     */
    MCAPI std::vector<enum Rotation> getShuffledRotations(class Random &);
    /**
     * @hash   -1153455248
     * @symbol ?rotate@RotationUtil@@YA?AVBlockPos@@AEBV2@W4Rotation@@@Z
     */
    MCAPI class BlockPos rotate(class BlockPos const &, enum Rotation);
    /**
     * @hash   754063103
     * @symbol ?rotate@RotationUtil@@YAEW4Rotation@@E@Z
     */
    MCAPI unsigned char rotate(enum Rotation, unsigned char);

};