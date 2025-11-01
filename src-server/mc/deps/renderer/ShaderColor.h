#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShaderColor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnke5d460;
    ::ll::UntypedStorage<1, 1>  mUnk7cbfc1;
    // NOLINTEND

public:
    // prevent constructor by default
    ShaderColor& operator=(ShaderColor const&);
    ShaderColor(ShaderColor const&);
    ShaderColor();
};
