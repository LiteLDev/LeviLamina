#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct IceControllerFactoryArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk3350de;
    ::ll::UntypedStorage<8, 64> mUnk38e68b;
    ::ll::UntypedStorage<8, 64> mUnka36931;
    ::ll::UntypedStorage<8, 8>  mUnke39c5e;
    ::ll::UntypedStorage<8, 32> mUnkdbdd09;
    // NOLINTEND

public:
    // prevent constructor by default
    IceControllerFactoryArgs& operator=(IceControllerFactoryArgs const&);
    IceControllerFactoryArgs(IceControllerFactoryArgs const&);
    IceControllerFactoryArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~IceControllerFactoryArgs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
