#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct UserBanDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk99fcae;
    ::ll::UntypedStorage<8, 40> mUnk52a735;
    ::ll::UntypedStorage<8, 16> mUnk2a4a6a;
    // NOLINTEND

public:
    // prevent constructor by default
    UserBanDetails& operator=(UserBanDetails const&);
    UserBanDetails(UserBanDetails const&);
    UserBanDetails();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~UserBanDetails();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Social
