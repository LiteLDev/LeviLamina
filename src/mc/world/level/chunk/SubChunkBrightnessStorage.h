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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKBRIGHTNESSSTORAGE_LIGHTPAIR
    public:
        LightPair& operator=(LightPair const&) = delete;
        LightPair(LightPair const&)            = delete;
        LightPair()                            = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKBRIGHTNESSSTORAGE
public:
    SubChunkBrightnessStorage& operator=(SubChunkBrightnessStorage const&) = delete;
    SubChunkBrightnessStorage(SubChunkBrightnessStorage const&)            = delete;
    SubChunkBrightnessStorage()                                            = delete;
#endif

public:
};
