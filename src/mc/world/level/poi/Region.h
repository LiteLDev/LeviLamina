#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Poi { struct RegionId; }
// clang-format on

namespace Poi {

struct Region {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk11dd56;
    ::ll::UntypedStorage<8, 64> mUnkfa4299;
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
