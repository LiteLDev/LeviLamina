#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct ActorReplacementParams {
public:
    // prevent constructor by default
    ActorReplacementParams& operator=(ActorReplacementParams const&);
    ActorReplacementParams(ActorReplacementParams const&);
    ActorReplacementParams();
};

}; // namespace Util
