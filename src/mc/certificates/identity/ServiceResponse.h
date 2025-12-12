#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct ServiceResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk2ef2d1;
    ::ll::UntypedStorage<1, 1>   mUnk657add;
    ::ll::UntypedStorage<1, 1>   mUnkc37cbe;
    ::ll::UntypedStorage<1, 1>   mUnk7a048d;
    ::ll::UntypedStorage<1, 1>   mUnkc21590;
    ::ll::UntypedStorage<8, 32>  mUnkbd9643;
    ::ll::UntypedStorage<8, 32>  mUnkea987a;
    ::ll::UntypedStorage<8, 32>  mUnk31f561;
    ::ll::UntypedStorage<8, 32>  mUnk56be35;
    ::ll::UntypedStorage<8, 32>  mUnk78e560;
    ::ll::UntypedStorage<8, 32>  mUnk4dc56b;
    ::ll::UntypedStorage<8, 32>  mUnkb32a75;
    ::ll::UntypedStorage<8, 32>  mUnk30419d;
    ::ll::UntypedStorage<8, 136> mUnkb6c00c;
    ::ll::UntypedStorage<8, 40>  mUnkc03a49;
    ::ll::UntypedStorage<8, 552> mUnk1165b9;
    ::ll::UntypedStorage<4, 4>   mUnkb336cc;
    // NOLINTEND

public:
    // prevent constructor by default
    ServiceResponse& operator=(ServiceResponse const&);
    ServiceResponse(ServiceResponse const&);
    ServiceResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::Identity::ServiceResponse& operator=(::Identity::ServiceResponse&&);

    MCNAPI_C ~ServiceResponse();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Identity
