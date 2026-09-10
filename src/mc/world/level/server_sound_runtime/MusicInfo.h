#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerSoundRuntime {

struct MusicInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5e322c;
    ::ll::UntypedStorage<8, 32> mUnkfc93ac;
    ::ll::UntypedStorage<8, 40> mUnkf54897;
    ::ll::UntypedStorage<8, 40> mUnk4b7bce;
    // NOLINTEND

public:
    // prevent constructor by default
    MusicInfo& operator=(MusicInfo const&);
    MusicInfo(MusicInfo const&);
    MusicInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MusicInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ServerSoundRuntime
