#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoMediaSendInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk702284;
    ::ll::UntypedStorage<8, 24> mUnkc70ab8;
    ::ll::UntypedStorage<8, 16> mUnk1b9452;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoMediaSendInfo& operator=(VideoMediaSendInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoMediaSendInfo();

    MCNAPI VideoMediaSendInfo(::webrtc::VideoMediaSendInfo const&);

    MCNAPI ~VideoMediaSendInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::VideoMediaSendInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
