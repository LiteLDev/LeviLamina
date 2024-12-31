#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

namespace PlayFab {

struct PlayFabLoginResultCommon : public ::PlayFab::PlayFabResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka187c2;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabLoginResultCommon& operator=(PlayFabLoginResultCommon const&);
    PlayFabLoginResultCommon(PlayFabLoginResultCommon const&);
    PlayFabLoginResultCommon();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayFabLoginResultCommon() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayFab
