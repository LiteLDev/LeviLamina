#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona::color {

struct Swatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk16a44c;
    ::ll::UntypedStorage<8, 32> mUnk28edb5;
    // NOLINTEND

public:
    // prevent constructor by default
    Swatch& operator=(Swatch const&);
    Swatch(Swatch const&);
    Swatch();
};

} // namespace persona::color
