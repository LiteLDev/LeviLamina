#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct ActiveIceControllerFactoryArgs {
public:
    // prevent constructor by default
    ActiveIceControllerFactoryArgs& operator=(ActiveIceControllerFactoryArgs const&);
    ActiveIceControllerFactoryArgs(ActiveIceControllerFactoryArgs const&);
    ActiveIceControllerFactoryArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActiveIceControllerFactoryArgs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
