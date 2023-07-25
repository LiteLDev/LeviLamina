#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct ContainerReplacementParams {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UTIL_CONTAINERREPLACEMENTPARAMS
public:
    ContainerReplacementParams& operator=(ContainerReplacementParams const&) = delete;
    ContainerReplacementParams(ContainerReplacementParams const&)            = delete;
    ContainerReplacementParams()                                             = delete;
#endif

public:
};

}; // namespace Util
