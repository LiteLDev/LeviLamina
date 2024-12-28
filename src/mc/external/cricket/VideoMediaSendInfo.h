#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VideoMediaSendInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkdab669;
    ::ll::UntypedStorage<8, 24> mUnk2ea507;
    ::ll::UntypedStorage<8, 16> mUnk6d241a;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoMediaSendInfo& operator=(VideoMediaSendInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VideoMediaSendInfo();

    MCAPI VideoMediaSendInfo(::cricket::VideoMediaSendInfo const&);

    MCAPI ~VideoMediaSendInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cricket::VideoMediaSendInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
