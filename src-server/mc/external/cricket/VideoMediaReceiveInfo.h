#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VideoMediaReceiveInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk61064d;
    ::ll::UntypedStorage<8, 16> mUnk31a460;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoMediaReceiveInfo& operator=(VideoMediaReceiveInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoMediaReceiveInfo();

    MCNAPI VideoMediaReceiveInfo(::cricket::VideoMediaReceiveInfo const&);

    MCNAPI ~VideoMediaReceiveInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cricket::VideoMediaReceiveInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
