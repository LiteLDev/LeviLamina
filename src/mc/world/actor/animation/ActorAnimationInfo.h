#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorAnimationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkc8d99a;
    ::ll::UntypedStorage<8, 8>  mUnkb92696;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationInfo& operator=(ActorAnimationInfo const&);
    ActorAnimationInfo(ActorAnimationInfo const&);
    ActorAnimationInfo();
};
