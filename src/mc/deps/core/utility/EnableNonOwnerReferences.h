#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class EnableNonOwnerReferences {
public:
    // prevent constructor by default
    EnableNonOwnerReferences& operator=(EnableNonOwnerReferences const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnableNonOwnerReferences();

    MCAPI EnableNonOwnerReferences();

    MCAPI EnableNonOwnerReferences(class Bedrock::EnableNonOwnerReferences const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(class Bedrock::EnableNonOwnerReferences const&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock
