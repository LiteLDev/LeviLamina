#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerLocationReceiver {
public:
    // PlayerLocationReceiver inner types declare
    // clang-format off
    struct ActorUniqueIDCompare;
    // clang-format on

    // PlayerLocationReceiver inner types define
    struct ActorUniqueIDCompare {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk89c1dd;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerLocationReceiver& operator=(PlayerLocationReceiver const&);
    PlayerLocationReceiver(PlayerLocationReceiver const&);
    PlayerLocationReceiver();
};
