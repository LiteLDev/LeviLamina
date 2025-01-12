#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct MediaSessionOptions {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI MediaSessionOptions();

    MCAPI MediaSessionOptions(::cricket::MediaSessionOptions const&);

    MCAPI ~MediaSessionOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cricket::MediaSessionOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
