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
        // member variables
        // NOLINTBEGIN
        union {
            struct {
                uchar blockLight : 4;
                uchar skyLight   : 4;
            };
            ::ll::TypedStorage<1, 1, uchar> raw;
        };
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2048, ::std::array<uchar, 2048>> mLightValues;
    // NOLINTEND
};
