#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct ActiveIceControllerFactoryArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 232> mUnk8ee417;
    ::ll::UntypedStorage<8, 8> mUnke92193;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveIceControllerFactoryArgs& operator=(ActiveIceControllerFactoryArgs const&);
    ActiveIceControllerFactoryArgs(ActiveIceControllerFactoryArgs const&);
    ActiveIceControllerFactoryArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActiveIceControllerFactoryArgs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
