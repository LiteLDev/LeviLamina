#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct MediaSessionOptions {
public:
    // prevent constructor by default
    MediaSessionOptions& operator=(MediaSessionOptions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MediaSessionOptions();

    MCNAPI MediaSessionOptions(::cricket::MediaSessionOptions const&);

    MCNAPI ~MediaSessionOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cricket::MediaSessionOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
