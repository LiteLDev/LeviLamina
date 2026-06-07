#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct EduFetchServersResponse {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<1, 72> mUnk92312f;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 72> mUnk92312f;
#endif
    ::ll::UntypedStorage<8, 56> mUnkfcf064;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    EduFetchServersResponse& operator=(EduFetchServersResponse const&);
    EduFetchServersResponse(EduFetchServersResponse const&);
    EduFetchServersResponse();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    EduFetchServersResponse& operator=(EduFetchServersResponse const&);
    EduFetchServersResponse();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI EduFetchServersResponse(::Social::EduFetchServersResponse const&);

    MCNAPI ~EduFetchServersResponse();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Social::EduFetchServersResponse const&);
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
