#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct DepthStencilTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6b28ea;
    ::ll::UntypedStorage<4, 4> mUnk3e9b0c;
    ::ll::UntypedStorage<4, 4> mUnk4591c6;
    ::ll::UntypedStorage<1, 1> mUnkc42630;
    // NOLINTEND

public:
    // prevent constructor by default
    DepthStencilTexture& operator=(DepthStencilTexture const&);
    DepthStencilTexture(DepthStencilTexture const&);
    DepthStencilTexture();
};

} // namespace renoir
