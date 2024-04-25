#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class OwnerStorageSharePtr {
public:
    // prevent constructor by default
    OwnerStorageSharePtr& operator=(OwnerStorageSharePtr const&);
    OwnerStorageSharePtr(OwnerStorageSharePtr const&);
    OwnerStorageSharePtr();
};
