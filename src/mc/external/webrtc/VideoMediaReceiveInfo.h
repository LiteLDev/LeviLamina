#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoMediaReceiveInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk22fb3b;
    ::ll::UntypedStorage<8, 16> mUnk880087;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoMediaReceiveInfo& operator=(VideoMediaReceiveInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoMediaReceiveInfo();

    MCNAPI VideoMediaReceiveInfo(::webrtc::VideoMediaReceiveInfo const&);

    MCNAPI ~VideoMediaReceiveInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::VideoMediaReceiveInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
