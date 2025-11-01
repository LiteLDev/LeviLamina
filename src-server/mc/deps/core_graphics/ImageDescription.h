#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

struct ImageDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkcf7118;
    ::ll::UntypedStorage<4, 4> mUnkd51c0d;
    ::ll::UntypedStorage<4, 4> mUnk5fec4a;
    ::ll::UntypedStorage<1, 1> mUnke5be67;
    ::ll::UntypedStorage<1, 1> mUnk667a5a;
    ::ll::UntypedStorage<4, 4> mUnkfb11c6;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageDescription& operator=(ImageDescription const&);
    ImageDescription(ImageDescription const&);
    ImageDescription();

};

}
