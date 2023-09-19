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
        // prevent constructor by default
        LightPair& operator=(LightPair const&);
        LightPair(LightPair const&);
        LightPair();
    };

public:
    // prevent constructor by default
    SubChunkBrightnessStorage& operator=(SubChunkBrightnessStorage const&);
    SubChunkBrightnessStorage(SubChunkBrightnessStorage const&);
    SubChunkBrightnessStorage();
};
