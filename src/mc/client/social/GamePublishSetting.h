#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class GamePublishSetting : int {
    NoMultiPlay      = 0x0,
    InviteOnly       = 0x1,
    FriendsOnly      = 0x2,
    FriendsOfFriends = 0x3,
    Public           = 0x4,
};

};
