#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct EduJoinServerResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72>  mUnkce4b98;
    ::ll::UntypedStorage<8, 40>  mUnk7d94d0;
    ::ll::UntypedStorage<4, 8>   mUnk9dc522;
    ::ll::UntypedStorage<8, 152> mUnk9150cd;
    // NOLINTEND

public:
    // prevent constructor by default
    EduJoinServerResponse& operator=(EduJoinServerResponse const&);
    EduJoinServerResponse(EduJoinServerResponse const&);
    EduJoinServerResponse();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~EduJoinServerResponse();
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
