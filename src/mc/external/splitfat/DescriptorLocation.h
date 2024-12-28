#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

struct DescriptorLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4ff905;
    ::ll::UntypedStorage<4, 4> mUnkc79336;
    ::ll::UntypedStorage<4, 4> mUnk121963;
    // NOLINTEND

public:
    // prevent constructor by default
    DescriptorLocation& operator=(DescriptorLocation const&);
    DescriptorLocation(DescriptorLocation const&);
    DescriptorLocation();
};

} // namespace SFAT
