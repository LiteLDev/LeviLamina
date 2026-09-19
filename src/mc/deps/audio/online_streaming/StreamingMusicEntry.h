#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StreamingMusicEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkca3acb;
    ::ll::UntypedStorage<8, 8>  mUnka0ad7a;
    ::ll::UntypedStorage<8, 16> mUnk949039;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamingMusicEntry& operator=(StreamingMusicEntry const&);
    StreamingMusicEntry(StreamingMusicEntry const&);
    StreamingMusicEntry();
};
