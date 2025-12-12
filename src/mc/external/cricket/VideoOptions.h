#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VideoOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk68ffa3;
    ::ll::UntypedStorage<4, 8> mUnk935f29;
    ::ll::UntypedStorage<1, 2> mUnk4eabee;
    ::ll::UntypedStorage<4, 4> mUnkb45156;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoOptions& operator=(VideoOptions const&);
    VideoOptions(VideoOptions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoOptions();

    MCNAPI ~VideoOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
