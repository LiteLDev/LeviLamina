#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockCollisionBoxComponentDescriptor {

struct Proxy {
public:
    // prevent constructor by default
    Proxy& operator=(Proxy const&);
    Proxy(Proxy const&);
    Proxy();
};

}; // namespace BlockCollisionBoxComponentDescriptor
