#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITreeCanopy {

public:
    // prevent constructor by default
    ITreeCanopy& operator=(ITreeCanopy const&) = delete;
    ITreeCanopy(ITreeCanopy const&)            = delete;
    ITreeCanopy()                              = delete;
};
