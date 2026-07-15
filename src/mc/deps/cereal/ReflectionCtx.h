#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/ReflectionContext.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace cereal {

struct ReflectionCtx : public ::Bedrock::EnableNonOwnerReferences, public ::cereal::internal::ReflectionContext {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ReflectionCtx();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
