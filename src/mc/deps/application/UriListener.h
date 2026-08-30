#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActivationUri;
// clang-format on

class UriListener {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~UriListener() = default;
#else // LL_PLAT_C
    virtual ~UriListener();
#endif

    virtual void onUri(::ActivationUri const& uri) = 0;

    virtual void tick() = 0;

    virtual void executeStartupUris() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
