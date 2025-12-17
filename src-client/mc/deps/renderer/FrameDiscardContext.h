#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct FrameDiscardContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkfac32a;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameDiscardContext& operator=(FrameDiscardContext const&);
    FrameDiscardContext(FrameDiscardContext const&);
    FrameDiscardContext();
};

} // namespace mce
