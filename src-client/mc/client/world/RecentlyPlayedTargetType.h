#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class RecentlyPlayedTargetType : uchar {
    LocalWorld       = 0,
    LanWorld         = 1,
    FriendWorld      = 2,
    RealmWorld       = 3,
    ExternalServer   = 4,
    ThirdPartyServer = 5,
    Experience       = 6,
    Count            = 7,
};

}
