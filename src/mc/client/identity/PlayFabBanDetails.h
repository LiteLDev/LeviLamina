#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct PlayFabBanDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdfee48;
    ::ll::UntypedStorage<8, 16> mUnk622f00;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabBanDetails& operator=(PlayFabBanDetails const&);
    PlayFabBanDetails(PlayFabBanDetails const&);
    PlayFabBanDetails();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~PlayFabBanDetails();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Social
