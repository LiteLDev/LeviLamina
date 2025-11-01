#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

struct MipLevelDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkae4edf;
    ::ll::UntypedStorage<4, 4> mUnkbe36b7;
    // NOLINTEND

public:
    // prevent constructor by default
    MipLevelDescription& operator=(MipLevelDescription const&);
    MipLevelDescription(MipLevelDescription const&);
    MipLevelDescription();

};

}
