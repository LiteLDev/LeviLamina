#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct EduAddServerResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk95caf4;
    // NOLINTEND

public:
    // prevent constructor by default
    EduAddServerResponse& operator=(EduAddServerResponse const&);
    EduAddServerResponse(EduAddServerResponse const&);
    EduAddServerResponse();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~EduAddServerResponse();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Social
