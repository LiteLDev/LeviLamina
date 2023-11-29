#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/synth/SimplexNoise.h"

class PerlinSimplexNoise {
public:
    int                       mLevels;              // this+0x0
    std::vector<SimplexNoise> mNoiseLevels;         // this+0x8
    float                     mNormalizationFactor; // this+0x20

    // prevent constructor by default
    PerlinSimplexNoise& operator=(PerlinSimplexNoise const&);
    PerlinSimplexNoise();

public:
    // NOLINTBEGIN
    // symbol: ??0PerlinSimplexNoise@@QEAA@AEBV0@@Z
    MCAPI PerlinSimplexNoise(class PerlinSimplexNoise const&);

    // symbol: ??0PerlinSimplexNoise@@QEAA@IH@Z
    MCAPI PerlinSimplexNoise(uint, int);

    // symbol: ??0PerlinSimplexNoise@@QEAA@AEAVIRandom@@H_N@Z
    MCAPI PerlinSimplexNoise(class IRandom&, int, bool);

    // symbol: ?getRegion@PerlinSimplexNoise@@QEBAPEAMPEAMAEBVVec2@@HH1MM@Z
    MCAPI float* getRegion(float*, class Vec2 const&, int, int, class Vec2 const&, float, float) const;

    // symbol: ?getValue@PerlinSimplexNoise@@QEBAMAEBVVec3@@@Z
    MCAPI float getValue(class Vec3 const&) const;

    // symbol: ?getValue@PerlinSimplexNoise@@QEBAMMM@Z
    MCAPI float getValue(float, float) const;

    // symbol: ?getValueNormalized@PerlinSimplexNoise@@QEBAMAEBVVec3@@@Z
    MCAPI float getValueNormalized(class Vec3 const&) const;

    // symbol: ?getValueNormalized@PerlinSimplexNoise@@QEBAMMM@Z
    MCAPI float getValueNormalized(float, float) const;

    // symbol: ??1PerlinSimplexNoise@@QEAA@XZ
    MCAPI ~PerlinSimplexNoise();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_init@PerlinSimplexNoise@@AEAAXAEAVIRandom@@_N@Z
    MCAPI void _init(class IRandom&, bool);

    // NOLINTEND
};
