#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::ext::internal {

struct JSONSchemaInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnke137c8;
    ::ll::UntypedStorage<8, 40> mUnk79aa8e;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONSchemaInfo(JSONSchemaInfo const&);
    JSONSchemaInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::cereal::ext::internal::JSONSchemaInfo& operator=(::cereal::ext::internal::JSONSchemaInfo&&);

    MCAPI ::cereal::ext::internal::JSONSchemaInfo& operator=(::cereal::ext::internal::JSONSchemaInfo const&);

    MCAPI ~JSONSchemaInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::ext::internal
