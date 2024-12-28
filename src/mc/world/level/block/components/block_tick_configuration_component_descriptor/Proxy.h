#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockTickConfigurationComponentDescriptor {

struct Proxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkb0cb88;
    ::ll::UntypedStorage<1, 1> mUnk7124c6;
    // NOLINTEND

public:
    // prevent constructor by default
    Proxy& operator=(Proxy const&);
    Proxy(Proxy const&);
    Proxy();
};

} // namespace BlockTickConfigurationComponentDescriptor
