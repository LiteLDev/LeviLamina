#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona::color {

class ColorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkc39816;
    ::ll::UntypedStorage<8, 8> mUnk51d530;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorInfo& operator=(ColorInfo const&);
    ColorInfo(ColorInfo const&);
    ColorInfo();

};

}
