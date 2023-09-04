#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkBrightnessStorage {
public:
    // SubChunkBrightnessStorage inner types declare
    // clang-format off
    struct LightPair;
    // clang-format on

    // SubChunkBrightnessStorage inner types define
    struct LightPair {
    public:
        uchar blockLight : 4;
        uchar skyLight : 4;
    };

public:
    std::array<LightPair, 2048> mLightValues; // this+0x0
};
