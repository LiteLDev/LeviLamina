#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class UntypedFunction {
public:
    // prevent constructor by default
    UntypedFunction& operator=(UntypedFunction const&);
    UntypedFunction(UntypedFunction const&);
    UntypedFunction();
};

}; // namespace webrtc
