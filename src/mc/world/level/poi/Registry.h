#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

struct Registry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk630408;
    ::ll::UntypedStorage<8, 72> mUnkd5eaad;
    ::ll::UntypedStorage<8, 24> mUnkdf4703;
    // NOLINTEND

public:
    // prevent constructor by default
    Registry& operator=(Registry const&);
    Registry(Registry const&);
    Registry();
};

} // namespace Poi
