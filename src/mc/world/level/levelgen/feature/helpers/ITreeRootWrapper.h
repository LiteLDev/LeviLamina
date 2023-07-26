#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITreeRootWrapper {

public:
    // prevent constructor by default
    ITreeRootWrapper& operator=(ITreeRootWrapper const&) = delete;
    ITreeRootWrapper(ITreeRootWrapper const&)            = delete;
    ITreeRootWrapper()                                   = delete;
};
