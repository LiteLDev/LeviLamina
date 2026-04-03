#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

class AttributeHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb108e1;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeHandle& operator=(AttributeHandle const&);
    AttributeHandle(AttributeHandle const&);
    AttributeHandle();
};

} // namespace EAS
