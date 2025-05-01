#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct StreamDataCounters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkdea04a;
    ::ll::UntypedStorage<8, 40> mUnk31e650;
    ::ll::UntypedStorage<8, 40> mUnk364c42;
    ::ll::UntypedStorage<8, 40> mUnka190e7;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamDataCounters& operator=(StreamDataCounters const&);
    StreamDataCounters(StreamDataCounters const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StreamDataCounters();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace webrtc
