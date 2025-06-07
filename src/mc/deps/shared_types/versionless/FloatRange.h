#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes {

struct FloatRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk74194f;
    ::ll::UntypedStorage<4, 4> mUnk6de176;
    // NOLINTEND

public:
    // prevent constructor by default
    FloatRange& operator=(FloatRange const&);
    FloatRange(FloatRange const&);
    FloatRange();
};

} // namespace SharedTypes
