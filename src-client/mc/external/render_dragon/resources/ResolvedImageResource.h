#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

class ResolvedImageResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk12250f;
    ::ll::UntypedStorage<4, 24> mUnk28e094;
    ::ll::UntypedStorage<8, 48> mUnkaf6dbd;
    // NOLINTEND

public:
    // prevent constructor by default
    ResolvedImageResource& operator=(ResolvedImageResource const&);
    ResolvedImageResource(ResolvedImageResource const&);
    ResolvedImageResource();
};

} // namespace dragon
