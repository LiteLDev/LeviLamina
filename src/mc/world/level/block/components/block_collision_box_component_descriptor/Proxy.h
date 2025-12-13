#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockCollisionBoxComponentDescriptor {

struct Proxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk1701af;
    ::ll::UntypedStorage<4, 12> mUnkffb3bd;
    // NOLINTEND

public:
    // prevent constructor by default
    Proxy& operator=(Proxy const&);
    Proxy(Proxy const&);
    Proxy();
};

} // namespace BlockCollisionBoxComponentDescriptor
