#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class RelayPortFactoryInterface {
public:
    // prevent constructor by default
    RelayPortFactoryInterface& operator=(RelayPortFactoryInterface const&);
    RelayPortFactoryInterface(RelayPortFactoryInterface const&);
    RelayPortFactoryInterface();
};

} // namespace cricket
