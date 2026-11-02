#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VariableTickRateSystem {

struct VariableTickController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkf0312a;
    ::ll::UntypedStorage<1, 1> mUnk10bf67;
    // NOLINTEND

public:
    // prevent constructor by default
    VariableTickController& operator=(VariableTickController const&);
    VariableTickController(VariableTickController const&);
    VariableTickController();
};

} // namespace VariableTickRateSystem
