#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct EduJoinServerResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>  mUnkce4b98;
    ::ll::UntypedStorage<8, 40>  mUnke2e8ab;
    ::ll::UntypedStorage<4, 8>   mUnk9dc522;
    ::ll::UntypedStorage<8, 152> mUnk9150cd;
    // NOLINTEND

public:
    // prevent constructor by default
    EduJoinServerResponse& operator=(EduJoinServerResponse const&);
    EduJoinServerResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C EduJoinServerResponse(::Social::EduJoinServerResponse&&);

    MCNAPI_C EduJoinServerResponse(::Social::EduJoinServerResponse const&);

    MCNAPI_C ~EduJoinServerResponse();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Social::EduJoinServerResponse&&);

    MCNAPI_C void* $ctor(::Social::EduJoinServerResponse const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Social
