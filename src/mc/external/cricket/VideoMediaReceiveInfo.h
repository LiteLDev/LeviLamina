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
    MCAPI VideoMediaReceiveInfo();

    MCAPI VideoMediaReceiveInfo(::cricket::VideoMediaReceiveInfo const&);

    MCAPI ~VideoMediaReceiveInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cricket::VideoMediaReceiveInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
