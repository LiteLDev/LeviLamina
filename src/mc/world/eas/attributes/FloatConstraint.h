#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

class FloatConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk1a845e;
    ::ll::UntypedStorage<4, 4> mUnk9add01;
    // NOLINTEND

public:
    // prevent constructor by default
    FloatConstraint& operator=(FloatConstraint const&);
    FloatConstraint(FloatConstraint const&);
    FloatConstraint();
};

} // namespace EAS
