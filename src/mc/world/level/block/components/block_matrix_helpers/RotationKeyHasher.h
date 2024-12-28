#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockMatrixHelpers {

struct RotationKeyHasher {
public:
    // prevent constructor by default
    RotationKeyHasher& operator=(RotationKeyHasher const&);
    RotationKeyHasher(RotationKeyHasher const&);
    RotationKeyHasher();
};

} // namespace BlockMatrixHelpers
