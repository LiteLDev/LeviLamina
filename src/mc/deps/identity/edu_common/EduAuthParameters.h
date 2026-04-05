#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct EduAuthParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkf8f857;
    ::ll::UntypedStorage<8, 32> mUnkf114cb;
    ::ll::UntypedStorage<8, 8>  mUnkd3647c;
    // NOLINTEND

public:
    // prevent constructor by default
    EduAuthParameters& operator=(EduAuthParameters const&);
    EduAuthParameters(EduAuthParameters const&);
    EduAuthParameters();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~EduAuthParameters();
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

} // namespace Identity
