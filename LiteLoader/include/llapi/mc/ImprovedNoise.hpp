/**
 * @file  ImprovedNoise.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ImprovedNoise.
 *
 */
class ImprovedNoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMPROVEDNOISE
public:
    class ImprovedNoise& operator=(class ImprovedNoise const &) = delete;
    ImprovedNoise(class ImprovedNoise const &) = delete;
    ImprovedNoise() = delete;
#endif

public:
    /**
     * @hash   1691590230
     * @symbol  ??0ImprovedNoise\@\@QEAA\@AEAVIRandom\@\@UYBlendingBugSettings\@\@\@Z
     */
    MCAPI ImprovedNoise(class IRandom &, struct YBlendingBugSettings);
    /**
     * @hash   -351507175
     * @symbol  ?_getValue\@ImprovedNoise\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float _getValue(class Vec3 const &) const;
    /**
     * @hash   1555370336
     * @symbol  ?_readArea\@ImprovedNoise\@\@QEBAXPEAMAEBVVec3\@\@HHH1M\@Z
     */
    MCAPI void _readArea(float *, class Vec3 const &, int, int, int, class Vec3 const &, float) const;

//private:
    /**
     * @hash   1552916455
     * @symbol  ?_blendCubeCorners\@ImprovedNoise\@\@AEBAXAEBVVec3\@\@HHHMAEAM111\@Z
     */
    MCAPI void _blendCubeCorners(class Vec3 const &, int, int, int, float, float &, float &, float &, float &) const;
    /**
     * @hash   375989552
     * @symbol  ?_init\@ImprovedNoise\@\@AEAAXAEBVVec3\@\@AEAVIRandom\@\@UYBlendingBugSettings\@\@\@Z
     */
    MCAPI void _init(class Vec3 const &, class IRandom &, struct YBlendingBugSettings);

private:

};