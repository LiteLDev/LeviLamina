#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class RelationToCurrentUser : int {
    Self = 0,
    TwoWayFriend = 1,
    Following = 2,
    Follower = 3,
    Stranger = 4,
    Unknown = 5,
};

}
