#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class GamePublishSetting : int {
    NoMultiPlay      = 0,
    InviteOnly       = 1,
    FriendsOnly      = 2,
    FriendsOfFriends = 3,
    Public           = 4,
};

}
