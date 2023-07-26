#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPlayerContainerSetter {

public:
    // prevent constructor by default
    IPlayerContainerSetter& operator=(IPlayerContainerSetter const&) = delete;
    IPlayerContainerSetter(IPlayerContainerSetter const&)            = delete;
    IPlayerContainerSetter()                                         = delete;
};
