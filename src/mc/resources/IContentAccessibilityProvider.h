#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IContentKeyProvider.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

class IContentAccessibilityProvider : public ::IContentKeyProvider {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~IContentAccessibilityProvider() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~IContentAccessibilityProvider() /*override*/;
#endif

    virtual bool canAccess(::ContentIdentity const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
