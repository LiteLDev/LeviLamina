#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk5c94ff;
    ::ll::UntypedStorage<8, 8>  mUnk19090b;
    // NOLINTEND

public:
    // prevent constructor by default
    VibrationDataComponent& operator=(VibrationDataComponent const&);
    VibrationDataComponent(VibrationDataComponent const&);
    VibrationDataComponent();
};
