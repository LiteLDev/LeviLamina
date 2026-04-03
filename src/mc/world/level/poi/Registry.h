#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

struct Registry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk873d81;
    ::ll::UntypedStorage<8, 72> mUnkd5eaad;
    ::ll::UntypedStorage<8, 24> mUnk6f9e5d;
    // NOLINTEND

public:
    // prevent constructor by default
    Registry& operator=(Registry const&);
    Registry(Registry const&);
    Registry();
};

} // namespace Poi
