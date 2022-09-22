/**
 * @file  PerlinNoise.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PerlinNoise.
 *
 */
class PerlinNoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERLINNOISE
public:
    class PerlinNoise& operator=(class PerlinNoise const &) = delete;
    PerlinNoise() = delete;
#endif

public:
    /**
     * @hash   1276123411
     * @symbol ??0PerlinNoise@@QEAA@IHH@Z
     */
    MCAPI PerlinNoise(unsigned int, int, int);
    /**
     * @hash   54715070
     * @symbol ??0PerlinNoise@@QEAA@AEAVIRandom@@UYBlendingBugSettings@@HH@Z
     */
    MCAPI PerlinNoise(class IRandom &, struct YBlendingBugSettings, int, int);
    /**
     * @hash   1367928687
     * @symbol ??0PerlinNoise@@QEAA@AEAVIRandom@@HH@Z
     */
    MCAPI PerlinNoise(class IRandom &, int, int);
    /**
     * @hash   -435666367
     * @symbol ??0PerlinNoise@@QEAA@AEBV0@@Z
     */
    MCAPI PerlinNoise(class PerlinNoise const &);
    /**
     * @hash   1145300394
     * @symbol ?getRegion@PerlinNoise@@QEBAXPEAMAEBVVec2@@HH1M@Z
     */
    MCAPI void getRegion(float *, class Vec2 const &, int, int, class Vec2 const &, float) const;
    /**
     * @hash   795367471
     * @symbol ?getRegion@PerlinNoise@@QEBAXPEAMAEBVVec3@@HHH1@Z
     */
    MCAPI void getRegion(float *, class Vec3 const &, int, int, int, class Vec3 const &) const;
    /**
     * @hash   168318327
     * @symbol ?getValue@PerlinNoise@@QEBAMAEBVVec3@@@Z
     */
    MCAPI float getValue(class Vec3 const &) const;
    /**
     * @hash   1589064231
     * @symbol ?getValueNormalized@PerlinNoise@@QEBAMAEBVVec3@@@Z
     */
    MCAPI float getValueNormalized(class Vec3 const &) const;
    /**
     * @hash   138906786
     * @symbol ??1PerlinNoise@@QEAA@XZ
     */
    MCAPI ~PerlinNoise();

//private:
    /**
     * @hash   -525392152
     * @symbol ?_init@PerlinNoise@@AEAAXAEAVIRandom@@UYBlendingBugSettings@@@Z
     */
    MCAPI void _init(class IRandom &, struct YBlendingBugSettings);

private:

};