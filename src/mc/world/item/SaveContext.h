#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SaveContext {
public:
    // SaveContext inner types define
    enum class SaveOperation : uchar {
        DeepCopy    = 0,
        ShallowCopy = 1,
    };

    enum class SaveUseCase : uchar {
        SaveToDisk      = 0,
        SendOverNetwork = 1,
        Clone           = 2,
        Move            = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SaveContext::SaveUseCase> mSaveUseCase;
    // NOLINTEND
};
