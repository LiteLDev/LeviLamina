#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/ReflectionContext.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace cereal {

struct ReflectionCtx : public ::Bedrock::EnableNonOwnerReferences, public ::cereal::internal::ReflectionContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReflectionCtx() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReflectionCtx();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
