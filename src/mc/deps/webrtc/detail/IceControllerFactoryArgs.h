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
    // NOLINTBEGIN
    // symbol: ??1IceControllerFactoryArgs@cricket@@QEAA@XZ
    MCAPI ~IceControllerFactoryArgs();

    // NOLINTEND
};

}; // namespace cricket
