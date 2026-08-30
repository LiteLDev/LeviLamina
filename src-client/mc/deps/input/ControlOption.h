#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ControlOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mControlOptionId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ControlOption() = default;
    // NOLINTEND
};
