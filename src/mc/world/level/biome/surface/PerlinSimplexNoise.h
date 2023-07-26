#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PerlinSimplexNoise {

public:
    // prevent constructor by default
    PerlinSimplexNoise& operator=(PerlinSimplexNoise const&) = delete;
    PerlinSimplexNoise()                                     = delete;

public:
    /**
     * @symbol ??0PerlinSimplexNoise\@\@QEAA\@IH\@Z
     */
    MCAPI PerlinSimplexNoise(unsigned int, int); // NOLINT
    /**
     * @symbol ??0PerlinSimplexNoise\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PerlinSimplexNoise(class PerlinSimplexNoise const&); // NOLINT
    /**
     * @symbol ??0PerlinSimplexNoise\@\@QEAA\@AEAVIRandom\@\@H_N\@Z
     */
    MCAPI PerlinSimplexNoise(class IRandom&, int, bool); // NOLINT
    /**
     * @symbol ?getRegion\@PerlinSimplexNoise\@\@QEBAPEAMPEAMAEBVVec2\@\@HH1MM\@Z
     */
    MCAPI float* getRegion(float*, class Vec2 const&, int, int, class Vec2 const&, float, float) const; // NOLINT
    /**
     * @symbol ?getValue\@PerlinSimplexNoise\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float getValue(class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?getValue\@PerlinSimplexNoise\@\@QEBAMMM\@Z
     */
    MCAPI float getValue(float, float) const; // NOLINT
    /**
     * @symbol ?getValueNormalized\@PerlinSimplexNoise\@\@QEBAMMM\@Z
     */
    MCAPI float getValueNormalized(float, float) const; // NOLINT
    /**
     * @symbol ?getValueNormalized\@PerlinSimplexNoise\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float getValueNormalized(class Vec3 const&) const; // NOLINT
    /**
     * @symbol ??1PerlinSimplexNoise\@\@QEAA\@XZ
     */
    MCAPI ~PerlinSimplexNoise(); // NOLINT

    // private:
    /**
     * @symbol ?_init\@PerlinSimplexNoise\@\@AEAAXAEAVIRandom\@\@_N\@Z
     */
    MCAPI void _init(class IRandom&, bool); // NOLINT

private:
};
