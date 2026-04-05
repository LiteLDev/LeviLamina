#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct BlendingState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkb8cf1d;
    ::ll::UntypedStorage<4, 4>  mUnkdeaa49;
    ::ll::UntypedStorage<4, 4>  mUnk50c9f4;
    ::ll::UntypedStorage<4, 4>  mUnk1b73ec;
    ::ll::UntypedStorage<4, 4>  mUnkfc7dc7;
    ::ll::UntypedStorage<4, 4>  mUnk83e782;
    ::ll::UntypedStorage<4, 4>  mUnk8f4b4f;
    ::ll::UntypedStorage<4, 16> mUnk89b939;
    // NOLINTEND

public:
    // prevent constructor by default
    BlendingState& operator=(BlendingState const&);
    BlendingState(BlendingState const&);
    BlendingState();
};

} // namespace renoir
