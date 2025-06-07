#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

struct ServiceResponseOfEnvironmentQueryResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkffe712;
    ::ll::UntypedStorage<8, 32> mUnk7695fe;
    // NOLINTEND

public:
    // prevent constructor by default
    ServiceResponseOfEnvironmentQueryResponse& operator=(ServiceResponseOfEnvironmentQueryResponse const&);
    ServiceResponseOfEnvironmentQueryResponse(ServiceResponseOfEnvironmentQueryResponse const&);
    ServiceResponseOfEnvironmentQueryResponse();
};

} // namespace SDL
