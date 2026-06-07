#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct AssertResourceServiceErrorHandler {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static void createResourceWhileServiceDisabled(::std::string const& payloadDebugInfo);

    MCNAPI static void didntCheckForValidity();

    MCNAPI static void didntCheckValidityForUpdate();

    MCNAPI static void invalidCreateResourceBlock();

    MCNAPI static void updateInvalidResource();

    MCNAPI static void updateNullHandle();
#endif
    // NOLINTEND
};

} // namespace mce
