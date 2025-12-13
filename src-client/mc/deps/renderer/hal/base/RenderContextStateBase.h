#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class RenderContextStateBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 7>  mUnkbed878;
    ::ll::UntypedStorage<4, 24> mUnkc907c4;
    ::ll::UntypedStorage<4, 12> mUnk9b7607;
    ::ll::UntypedStorage<4, 96> mUnk2a2eee;
    ::ll::UntypedStorage<1, 8>  mUnkcb572b;
    ::ll::UntypedStorage<4, 16> mUnk60ab63;
    ::ll::UntypedStorage<4, 24> mUnkabd0f0;
    ::ll::UntypedStorage<1, 8>  mUnk4276f6;
    ::ll::UntypedStorage<8, 64> mUnk547177;
    ::ll::UntypedStorage<8, 8>  mUnkfbdadd;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderContextStateBase& operator=(RenderContextStateBase const&);
    RenderContextStateBase(RenderContextStateBase const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderContextStateBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace mce
