#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

struct Region {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk126dfe;
    ::ll::UntypedStorage<8, 80> mUnkb039e8;
    ::ll::UntypedStorage<8, 8>  mUnkd30fd1;
    ::ll::UntypedStorage<4, 24> mUnkcfe556;
    // NOLINTEND

public:
    // prevent constructor by default
    Region& operator=(Region const&);
    Region(Region const&);
    Region();
};

} // namespace Poi
