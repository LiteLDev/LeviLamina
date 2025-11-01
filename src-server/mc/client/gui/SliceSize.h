#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

struct SliceSize {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk33352e;
    ::ll::UntypedStorage<4, 4> mUnk90c5f1;
    ::ll::UntypedStorage<4, 4> mUnk82c194;
    ::ll::UntypedStorage<4, 4> mUnk6c546e;
    // NOLINTEND

public:
    // prevent constructor by default
    SliceSize& operator=(SliceSize const&);
    SliceSize(SliceSize const&);
    SliceSize();
};

} // namespace ui
