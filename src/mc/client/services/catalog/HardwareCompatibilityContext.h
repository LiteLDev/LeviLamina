#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HardwareCompatibilityContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkceeb72;
    union {
        ::ll::UntypedStorage<1, 1> mUnk443f29;
        ::ll::UntypedStorage<4, 4> mUnke1b9ff;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    HardwareCompatibilityContext& operator=(HardwareCompatibilityContext const&);
    HardwareCompatibilityContext(HardwareCompatibilityContext const&);
    HardwareCompatibilityContext();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::HardwareCompatibilityContext const buildHardwareCompatibilityContext();
    // NOLINTEND
};
