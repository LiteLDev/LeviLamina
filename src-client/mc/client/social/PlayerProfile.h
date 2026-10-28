#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/PlayerProfileData.h"
#include "mc/client/social/PlayerProfileState.h"

namespace Social {

struct PlayerProfile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::Social::PlayerProfileState> state;
    ::ll::TypedStorage<8, 648, ::Social::PlayerProfileData> data;
    // NOLINTEND
};

} // namespace Social
