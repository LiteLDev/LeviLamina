#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

namespace PlayFab {

struct PlayFabRequestCommon : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1be013;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabRequestCommon& operator=(PlayFabRequestCommon const&);
    PlayFabRequestCommon(PlayFabRequestCommon const&);
    PlayFabRequestCommon();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayFabRequestCommon() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace PlayFab
