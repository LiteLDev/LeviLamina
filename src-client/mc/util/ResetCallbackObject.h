#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetCallbackObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCallbackReady;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResetCallbackObject() = default;

    virtual void resetCallback() = 0;
    // NOLINTEND
};
