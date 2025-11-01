#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct IceControllerFactoryArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk2b8141;
    ::ll::UntypedStorage<8, 64> mUnk4c8cde;
    ::ll::UntypedStorage<8, 64> mUnkd85a48;
    ::ll::UntypedStorage<8, 8>  mUnkb7a486;
    ::ll::UntypedStorage<8, 32> mUnk8ded69;
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

} // namespace cricket
