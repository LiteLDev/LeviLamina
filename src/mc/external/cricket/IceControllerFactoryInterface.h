#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class IceControllerFactoryInterface {
public:
    // prevent constructor by default
    IceControllerFactoryInterface& operator=(IceControllerFactoryInterface const&);
    IceControllerFactoryInterface(IceControllerFactoryInterface const&);
    IceControllerFactoryInterface();
};

} // namespace cricket
