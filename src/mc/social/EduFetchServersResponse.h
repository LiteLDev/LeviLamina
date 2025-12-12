#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct EduFetchServersResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk92312f;
    ::ll::UntypedStorage<8, 64> mUnk8a5135;
    // NOLINTEND

public:
    // prevent constructor by default
    EduFetchServersResponse& operator=(EduFetchServersResponse const&);
    EduFetchServersResponse(EduFetchServersResponse const&);
    EduFetchServersResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~EduFetchServersResponse();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Social
