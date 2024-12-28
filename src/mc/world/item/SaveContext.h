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
    ::ll::UntypedStorage<1, 1> mUnkb8ccb8;
    // NOLINTEND

public:
    // prevent constructor by default
    SaveContext& operator=(SaveContext const&);
    SaveContext(SaveContext const&);
    SaveContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SaveContext::SaveOperation getOperation() const;
    // NOLINTEND
};
