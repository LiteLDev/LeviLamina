#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct DataChannelInit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk5b8250;
    ::ll::UntypedStorage<1, 1>  mUnkb39de8;
    ::ll::UntypedStorage<4, 8>  mUnk3995ed;
    ::ll::UntypedStorage<4, 8>  mUnkb04cc9;
    ::ll::UntypedStorage<8, 32> mUnk3f46b4;
    ::ll::UntypedStorage<1, 1>  mUnka05a7d;
    ::ll::UntypedStorage<4, 4>  mUnkbdecbf;
    ::ll::UntypedStorage<4, 8>  mUnk62a509;
    // NOLINTEND

public:
    // prevent constructor by default
    DataChannelInit& operator=(DataChannelInit const&);
    DataChannelInit(DataChannelInit const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataChannelInit();

    MCNAPI ~DataChannelInit();
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
