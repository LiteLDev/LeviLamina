#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab {

class PlayFabEventPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk214a7e;
    ::ll::UntypedStorage<8, 8>  mUnk67df12;
    ::ll::UntypedStorage<8, 8>  mUnk3148d8;
    ::ll::UntypedStorage<8, 16> mUnk22bc9a;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabEventPacket& operator=(PlayFabEventPacket const&);
    PlayFabEventPacket(PlayFabEventPacket const&);
    PlayFabEventPacket();
};

} // namespace PlayFab
