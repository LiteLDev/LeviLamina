#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct ActorReplacementParams {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UTIL_ACTORREPLACEMENTPARAMS
public:
    ActorReplacementParams& operator=(ActorReplacementParams const&) = delete;
    ActorReplacementParams(ActorReplacementParams const&)            = delete;
    ActorReplacementParams()                                         = delete;
#endif

public:
};

}; // namespace Util
