#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CallbackTokenCancelState {
public:
    // member variables
    // NOLINTBEGIN
    std::atomic<bool> mCanceled;
    // NOLINTEND

    void cancel() { mCanceled = true; }
    bool wasCanceled() const { return mCanceled; }
};
