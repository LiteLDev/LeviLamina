#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITreeCanopyWrapper {
public:
    // prevent constructor by default
    ITreeCanopyWrapper& operator=(ITreeCanopyWrapper const&);
    ITreeCanopyWrapper(ITreeCanopyWrapper const&);
    ITreeCanopyWrapper();

public:
    // NOLINTBEGIN
    MCAPI ~ITreeCanopyWrapper();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
