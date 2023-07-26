#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITreeTrunkWrapper {

public:
    // prevent constructor by default
    ITreeTrunkWrapper& operator=(ITreeTrunkWrapper const&) = delete;
    ITreeTrunkWrapper(ITreeTrunkWrapper const&)            = delete;
    ITreeTrunkWrapper()                                    = delete;
};
