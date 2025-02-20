#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SaveContext {
public:
    // SaveContext inner types define
    enum class SaveUseCase : uchar {
        SaveToDisk      = 0,
        SendOverNetwork = 1,
        Clone           = 2,
    };

    enum class SaveOperation : uchar {
        DeepCopy    = 0,
        ShallowCopy = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::SaveContext::SaveUseCase mSaveUseCase{SaveUseCase::Clone};
    // NOLINTEND
};
