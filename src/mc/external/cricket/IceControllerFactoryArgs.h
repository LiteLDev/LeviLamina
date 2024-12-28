#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct IceControllerFactoryArgs {
public:
    // prevent constructor by default
    IceControllerFactoryArgs& operator=(IceControllerFactoryArgs const&);
    IceControllerFactoryArgs(IceControllerFactoryArgs const&);
    IceControllerFactoryArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~IceControllerFactoryArgs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
