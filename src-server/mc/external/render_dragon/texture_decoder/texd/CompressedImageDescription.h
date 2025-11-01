#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

struct CompressedImageDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk489962;
    ::ll::UntypedStorage<4, 4> mUnk24aa1b;
    ::ll::UntypedStorage<4, 4> mUnkabde43;
    ::ll::UntypedStorage<1, 1> mUnka02463;
    ::ll::UntypedStorage<4, 4> mUnkbf8a0d;
    ::ll::UntypedStorage<4, 4> mUnke32f63;
    ::ll::UntypedStorage<4, 4> mUnk882415;
    // NOLINTEND

public:
    // prevent constructor by default
    CompressedImageDescription& operator=(CompressedImageDescription const&);
    CompressedImageDescription(CompressedImageDescription const&);
    CompressedImageDescription();
};

} // namespace texd
