#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockQueuedTickingComponentDescriptor {

struct Proxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbe4614;
    ::ll::UntypedStorage<8, 56> mUnkdad595;
    ::ll::UntypedStorage<1, 1>  mUnk3358c0;
    // NOLINTEND

public:
    // prevent constructor by default
    Proxy& operator=(Proxy const&);
    Proxy(Proxy const&);
    Proxy();
};

} // namespace BlockQueuedTickingComponentDescriptor
