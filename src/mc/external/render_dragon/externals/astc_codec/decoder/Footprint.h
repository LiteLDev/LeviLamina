#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace astc_codec {

class Footprint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk1b13c4;
    ::ll::UntypedStorage<4, 4> mUnk1a652b;
    ::ll::UntypedStorage<4, 4> mUnkadd6f4;
    // NOLINTEND

public:
    // prevent constructor by default
    Footprint& operator=(Footprint const&);
    Footprint(Footprint const&);
    Footprint();
};

} // namespace astc_codec
