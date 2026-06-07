#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/Player.h"
#include "mc/client/network/realms/RealmsAPI.h"

struct RealmPlayer : public ::Realms::Player {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RealmsAPI::InviteAction> mInviteAction;
    ::ll::TypedStorage<4, 4, ::RealmsAPI::InviteAction> mOperatorAction;
    ::ll::TypedStorage<1, 1, bool>                      mInviteStatusChanged;
    ::ll::TypedStorage<1, 1, bool>                      mOperatorStatusChanged;
    ::ll::TypedStorage<1, 1, bool>                      mHasPlatformProfile;
    // NOLINTEND
};
