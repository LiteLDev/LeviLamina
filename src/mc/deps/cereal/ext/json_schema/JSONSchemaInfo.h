#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::ext::internal {

struct JSONSchemaInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk841502;
    ::ll::UntypedStorage<8, 40> mUnk9aac33;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONSchemaInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JSONSchemaInfo(::cereal::ext::internal::JSONSchemaInfo const&);

    MCNAPI ::cereal::ext::internal::JSONSchemaInfo& operator=(::cereal::ext::internal::JSONSchemaInfo&&);

    MCNAPI ::cereal::ext::internal::JSONSchemaInfo& operator=(::cereal::ext::internal::JSONSchemaInfo const&);

    MCNAPI ~JSONSchemaInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ext::internal::JSONSchemaInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::ext::internal
