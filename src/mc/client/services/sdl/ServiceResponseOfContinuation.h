#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

struct ServiceResponseOfContinuation {
public:
    // prevent constructor by default
    ServiceResponseOfContinuation& operator=(ServiceResponseOfContinuation const&);
    ServiceResponseOfContinuation(ServiceResponseOfContinuation const&);
    ServiceResponseOfContinuation();
};

} // namespace SDL
