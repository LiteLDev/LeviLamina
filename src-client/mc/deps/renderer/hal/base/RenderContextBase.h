#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class RenderContextBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 272> mUnkacad00;
    ::ll::UntypedStorage<4, 40>  mUnk80a540;
    ::ll::UntypedStorage<8, 24>  mUnkd1eb37;
    ::ll::UntypedStorage<8, 8>   mUnk1608f0;
    ::ll::UntypedStorage<8, 8>   mUnk5dd278;
    ::ll::UntypedStorage<8, 8>   mUnkfaff0e;
    ::ll::UntypedStorage<4, 52>  mUnka47a14;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderContextBase& operator=(RenderContextBase const&);
    RenderContextBase(RenderContextBase const&);
    RenderContextBase();
};

} // namespace mce
