#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

struct GroupPoolDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1e0d5a;
    ::ll::UntypedStorage<8, 8> mUnke6d5c9;
    ::ll::UntypedStorage<1, 1> mUnkdd8ec4;
    // NOLINTEND

public:
    // prevent constructor by default
    GroupPoolDescription& operator=(GroupPoolDescription const&);
    GroupPoolDescription(GroupPoolDescription const&);
    GroupPoolDescription();
};

} // namespace cg
