#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoMediaInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7f6e68;
    ::ll::UntypedStorage<8, 24> mUnka6b9ce;
    ::ll::UntypedStorage<8, 24> mUnk3e2ab5;
    ::ll::UntypedStorage<8, 16> mUnkcb9591;
    ::ll::UntypedStorage<8, 16> mUnk6ac799;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoMediaInfo& operator=(VideoMediaInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoMediaInfo();

    MCNAPI VideoMediaInfo(::webrtc::VideoMediaInfo const&);

    MCNAPI ~VideoMediaInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::VideoMediaInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
