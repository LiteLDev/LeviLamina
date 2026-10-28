#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct NoiseTransitionAttributeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 28> mUnk22fc3e;
    ::ll::UntypedStorage<4, 28> mUnk5dcc3b;
    ::ll::UntypedStorage<8, 96> mUnk982f07;
    // NOLINTEND

public:
    // prevent constructor by default
    NoiseTransitionAttributeData& operator=(NoiseTransitionAttributeData const&);
    NoiseTransitionAttributeData(NoiseTransitionAttributeData const&);
    NoiseTransitionAttributeData();
};

} // namespace EAS
