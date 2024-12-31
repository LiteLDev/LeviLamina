#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

namespace PlayFab {

struct PlayFabResultCommon : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkcf51ad;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabResultCommon& operator=(PlayFabResultCommon const&);
    PlayFabResultCommon(PlayFabResultCommon const&);
    PlayFabResultCommon();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayFabResultCommon() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayFab
