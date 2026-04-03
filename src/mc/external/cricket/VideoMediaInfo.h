#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VideoMediaInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka749bc;
    ::ll::UntypedStorage<8, 24> mUnk312910;
    ::ll::UntypedStorage<8, 24> mUnkf51e0f;
    ::ll::UntypedStorage<8, 16> mUnkd993e3;
    ::ll::UntypedStorage<8, 16> mUnkba6390;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoMediaInfo& operator=(VideoMediaInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoMediaInfo();

    MCNAPI VideoMediaInfo(::cricket::VideoMediaInfo const&);

    MCNAPI ~VideoMediaInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cricket::VideoMediaInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
