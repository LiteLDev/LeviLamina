#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PerlinNoise {

public:
    // prevent constructor by default
    PerlinNoise& operator=(PerlinNoise const&) = delete;
    PerlinNoise()                              = delete;

public:
    /**
     * @symbol ??0PerlinNoise\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PerlinNoise(class PerlinNoise const&); // NOLINT
    /**
     * @symbol ??0PerlinNoise\@\@QEAA\@IHH\@Z
     */
    MCAPI PerlinNoise(unsigned int, int, int); // NOLINT
    /**
     * @symbol ??0PerlinNoise\@\@QEAA\@AEAVIRandom\@\@HH\@Z
     */
    MCAPI PerlinNoise(class IRandom&, int, int); // NOLINT
    /**
     * @symbol ??0PerlinNoise\@\@QEAA\@AEAVIRandom\@\@UYBlendingBugSettings\@\@HH\@Z
     */
    MCAPI PerlinNoise(class IRandom&, struct YBlendingBugSettings, int, int); // NOLINT
    /**
     * @symbol ?getRegion\@PerlinNoise\@\@QEBAXPEAMAEBVVec2\@\@HH1M\@Z
     */
    MCAPI void getRegion(float*, class Vec2 const&, int, int, class Vec2 const&, float) const; // NOLINT
    /**
     * @symbol ?getRegion\@PerlinNoise\@\@QEBAXPEAMAEBVVec3\@\@HHH1\@Z
     */
    MCAPI void getRegion(float*, class Vec3 const&, int, int, int, class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?getValue\@PerlinNoise\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float getValue(class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?getValueNormalized\@PerlinNoise\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float getValueNormalized(class Vec3 const&) const; // NOLINT
    /**
     * @symbol ??1PerlinNoise\@\@QEAA\@XZ
     */
    MCAPI ~PerlinNoise(); // NOLINT

    // private:
    /**
     * @symbol ?_init\@PerlinNoise\@\@AEAAXAEAVIRandom\@\@UYBlendingBugSettings\@\@\@Z
     */
    MCAPI void _init(class IRandom&, struct YBlendingBugSettings); // NOLINT

private:
};
