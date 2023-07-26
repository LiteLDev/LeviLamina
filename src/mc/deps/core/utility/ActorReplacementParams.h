#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct ActorReplacementParams {

public:
    // prevent constructor by default
    ActorReplacementParams& operator=(ActorReplacementParams const&) = delete;
    ActorReplacementParams(ActorReplacementParams const&)            = delete;
    ActorReplacementParams()                                         = delete;
};

}; // namespace Util
