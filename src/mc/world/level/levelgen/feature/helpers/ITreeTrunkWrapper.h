#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITreeTrunkWrapper {
public:
    // prevent constructor by default
    ITreeTrunkWrapper& operator=(ITreeTrunkWrapper const&);
    ITreeTrunkWrapper(ITreeTrunkWrapper const&);
    ITreeTrunkWrapper();
};
