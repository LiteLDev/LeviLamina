#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct CommonRenderingLibraryParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk6dfadf;
    ::ll::UntypedStorage<1, 1> mUnk6b96e5;
    ::ll::UntypedStorage<1, 1> mUnkffb31f;
    ::ll::UntypedStorage<4, 4> mUnkaedd6f;
    ::ll::UntypedStorage<4, 4> mUnkfa89e9;
    ::ll::UntypedStorage<4, 4> mUnkec3dc2;
    ::ll::UntypedStorage<8, 8> mUnkdee5ba;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonRenderingLibraryParams& operator=(CommonRenderingLibraryParams const&);
    CommonRenderingLibraryParams(CommonRenderingLibraryParams const&);
    CommonRenderingLibraryParams();
};

} // namespace renoir
