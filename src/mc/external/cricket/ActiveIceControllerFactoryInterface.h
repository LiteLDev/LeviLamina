#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class ActiveIceControllerFactoryInterface {
public:
    // prevent constructor by default
    ActiveIceControllerFactoryInterface& operator=(ActiveIceControllerFactoryInterface const&);
    ActiveIceControllerFactoryInterface(ActiveIceControllerFactoryInterface const&);
    ActiveIceControllerFactoryInterface();
};

} // namespace cricket
