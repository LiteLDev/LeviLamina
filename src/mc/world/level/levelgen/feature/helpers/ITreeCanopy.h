#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITreeCanopy {
public:
    // prevent constructor by default
    ITreeCanopy& operator=(ITreeCanopy const&);
    ITreeCanopy(ITreeCanopy const&);
    ITreeCanopy();
};
