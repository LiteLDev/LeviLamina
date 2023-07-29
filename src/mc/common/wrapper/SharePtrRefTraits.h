#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/Ref.h"

template <typename T0>
struct SharePtrRefTraits {
public:
    using StackRef           = T0;
    using OwnerStackRef      = StackRef;
    using WeakStorage        = WeakStorageSharePtr<StackRef>;
    using OwnerStorage       = OwnerStorageSharePtr<OwnerStackRef>;
    using StackResultStorage = StackResultStorageSharePtr<StackRef>;
};
