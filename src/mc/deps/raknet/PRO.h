#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct PRO {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf19e99;
    ::ll::UntypedStorage<4, 4> mUnk299a53;
    ::ll::UntypedStorage<1, 1> mUnk3480eb;
    ::ll::UntypedStorage<4, 4> mUnk55631d;
    // NOLINTEND

public:
    // prevent constructor by default
    PRO& operator=(PRO const&);
    PRO(PRO const&);
    PRO();
};

} // namespace RakNet
