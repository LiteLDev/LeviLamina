#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct EduFetchServersResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk92312f;
    ::ll::UntypedStorage<8, 56> mUnkfcf064;
    // NOLINTEND

public:
    // prevent constructor by default
    EduFetchServersResponse& operator=(EduFetchServersResponse const&);
    EduFetchServersResponse(EduFetchServersResponse const&);
    EduFetchServersResponse();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Social::EduFetchServersResponse&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Social
