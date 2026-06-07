#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct EduJoinServerResponse {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<1, 72> mUnkce4b98;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 72> mUnkce4b98;
#endif
    ::ll::UntypedStorage<8, 40>  mUnk7d94d0;
    ::ll::UntypedStorage<4, 8>   mUnk9dc522;
    ::ll::UntypedStorage<8, 152> mUnk9150cd;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    EduJoinServerResponse& operator=(EduJoinServerResponse const&);
    EduJoinServerResponse(EduJoinServerResponse const&);
    EduJoinServerResponse();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    EduJoinServerResponse(EduJoinServerResponse const&);
    EduJoinServerResponse();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Social::EduJoinServerResponse& operator=(::Social::EduJoinServerResponse const&);

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
