#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct EduFetchServersResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk92312f;
    ::ll::UntypedStorage<8, 32> mUnk926e3f;
    // NOLINTEND

public:
    // prevent constructor by default
    EduFetchServersResponse& operator=(EduFetchServersResponse const&);
    EduFetchServersResponse(EduFetchServersResponse const&);
    EduFetchServersResponse();
};

} // namespace Social
