#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct DepthStencilState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk204801;
    ::ll::UntypedStorage<4, 4> mUnk71ccd4;
    ::ll::UntypedStorage<4, 4> mUnke8a43a;
    ::ll::UntypedStorage<4, 4> mUnk44611d;
    ::ll::UntypedStorage<4, 4> mUnke0061f;
    ::ll::UntypedStorage<4, 4> mUnk387944;
    ::ll::UntypedStorage<4, 4> mUnk9c6e59;
    ::ll::UntypedStorage<4, 4> mUnkd1f775;
    ::ll::UntypedStorage<4, 4> mUnk20a9fe;
    ::ll::UntypedStorage<4, 4> mUnk51b2a9;
    ::ll::UntypedStorage<4, 4> mUnk6ea3fb;
    ::ll::UntypedStorage<1, 1> mUnk9330f5;
    ::ll::UntypedStorage<1, 1> mUnk2cd427;
    ::ll::UntypedStorage<1, 1> mUnk193876;
    ::ll::UntypedStorage<1, 1> mUnkcc188b;
    ::ll::UntypedStorage<1, 1> mUnk8a7140;
    // NOLINTEND

public:
    // prevent constructor by default
    DepthStencilState& operator=(DepthStencilState const&);
    DepthStencilState(DepthStencilState const&);
    DepthStencilState();
};

} // namespace renoir
