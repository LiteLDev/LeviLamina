#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ColorChannel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc791a4;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorChannel& operator=(ColorChannel const&);
    ColorChannel(ColorChannel const&);
    ColorChannel();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ColorChannel const& INVALID();
    // NOLINTEND

};
