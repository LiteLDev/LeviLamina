#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct MediaSessionOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnka2e30f;
    ::ll::UntypedStorage<1, 1>  mUnke50be1;
    ::ll::UntypedStorage<1, 1>  mUnk70bb87;
    ::ll::UntypedStorage<1, 1>  mUnkae0d56;
    ::ll::UntypedStorage<1, 1>  mUnkd4b3bf;
    ::ll::UntypedStorage<8, 32> mUnk4105f3;
    ::ll::UntypedStorage<1, 5>  mUnk284341;
    ::ll::UntypedStorage<8, 24> mUnkcafb82;
    ::ll::UntypedStorage<8, 24> mUnk873374;
    ::ll::UntypedStorage<1, 1>  mUnk23d6d4;
    // NOLINTEND

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
