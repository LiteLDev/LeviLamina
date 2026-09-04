#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnke80c5c;
    ::ll::UntypedStorage<4, 8> mUnk77a831;
    ::ll::UntypedStorage<1, 2> mUnk941d80;
    ::ll::UntypedStorage<4, 4> mUnk27498b;
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

} // namespace webrtc
