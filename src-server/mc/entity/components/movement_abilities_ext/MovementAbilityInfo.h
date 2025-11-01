#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MovementAbilitiesExt {

struct MovementAbilityInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk8112cd;
    ::ll::UntypedStorage<4, 4> mUnkf32451;
    ::ll::UntypedStorage<4, 8> mUnk6f70a8;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementAbilityInfo& operator=(MovementAbilityInfo const&);
    MovementAbilityInfo(MovementAbilityInfo const&);
    MovementAbilityInfo();

};

}
