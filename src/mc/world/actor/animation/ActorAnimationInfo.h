#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorAnimationInfo {

public:
    // prevent constructor by default
    ActorAnimationInfo& operator=(ActorAnimationInfo const&) = delete;
    ActorAnimationInfo(ActorAnimationInfo const&)            = delete;
    ActorAnimationInfo()                                     = delete;
};
