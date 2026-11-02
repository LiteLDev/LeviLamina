#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StreamingMusicEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkca3acb;
    ::ll::UntypedStorage<8, 24> mUnkf8e43d;
    ::ll::UntypedStorage<8, 48> mUnkf469e9;
    ::ll::UntypedStorage<8, 16> mUnk949039;
    ::ll::UntypedStorage<8, 72> mUnkaa4078;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamingMusicEntry& operator=(StreamingMusicEntry const&);
    StreamingMusicEntry(StreamingMusicEntry const&);
    StreamingMusicEntry();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~StreamingMusicEntry();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
