#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct NoiseAlignment {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkaa86a4;
    ::ll::UntypedStorage<4, 4> mUnk25a853;
    // NOLINTEND

public:
    // prevent constructor by default
    NoiseAlignment& operator=(NoiseAlignment const&);
    NoiseAlignment(NoiseAlignment const&);
    NoiseAlignment();
};

} // namespace EAS
