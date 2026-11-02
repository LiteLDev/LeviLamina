#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayMusicOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd13a56;
    ::ll::UntypedStorage<4, 4>  mUnkce4c28;
    ::ll::UntypedStorage<4, 4>  mUnk11853f;
    ::ll::UntypedStorage<8, 16> mUnk1757e4;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayMusicOptions& operator=(PlayMusicOptions const&);
    PlayMusicOptions(PlayMusicOptions const&);
    PlayMusicOptions();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~PlayMusicOptions();
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
