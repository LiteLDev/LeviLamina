#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

struct EnvironmentQueryResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb7e4a8;
    ::ll::UntypedStorage<8, 16> mUnk6d4729;
    // NOLINTEND

public:
    // prevent constructor by default
    EnvironmentQueryResponse& operator=(EnvironmentQueryResponse const&);
    EnvironmentQueryResponse(EnvironmentQueryResponse const&);
    EnvironmentQueryResponse();
};

} // namespace SDL
