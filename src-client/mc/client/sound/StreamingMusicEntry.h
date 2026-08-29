#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StreamingMusicEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mUrl;
    ::ll::TypedStorage<8, 8, uint64>         mTotalSamples;
    ::ll::TypedStorage<4, 4, uint>           mSampleRate;
    ::ll::TypedStorage<4, 4, uint>           mChannels;
    // NOLINTEND
};
