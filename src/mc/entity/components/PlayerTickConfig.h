#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerTickConfig {
public:
    // PlayerTickConfig inner types define
    enum class TickPolicy : uchar {
        Greedy    = 0,
        Throttled = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk840e3d;
    ::ll::UntypedStorage<8, 8> mUnkf88077;
    ::ll::UntypedStorage<8, 8> mUnkb54015;
    ::ll::UntypedStorage<1, 1> mUnkd04d7e;
    ::ll::UntypedStorage<1, 1> mUnk510c08;
    ::ll::UntypedStorage<1, 1> mUnk24676a;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTickConfig& operator=(PlayerTickConfig const&);
    PlayerTickConfig(PlayerTickConfig const&);
    PlayerTickConfig();
};
