#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::ext::internal {

struct JSONSchemaInfo {
public:
    // prevent constructor by default
    JSONSchemaInfo();

public:
    // NOLINTBEGIN
    MCAPI JSONSchemaInfo(struct cereal::ext::internal::JSONSchemaInfo&&);

    MCAPI JSONSchemaInfo(struct cereal::ext::internal::JSONSchemaInfo const&);

    MCAPI struct cereal::ext::internal::JSONSchemaInfo& operator=(struct cereal::ext::internal::JSONSchemaInfo&&);

    MCAPI struct cereal::ext::internal::JSONSchemaInfo& operator=(struct cereal::ext::internal::JSONSchemaInfo const&);

    MCAPI ~JSONSchemaInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct cereal::ext::internal::JSONSchemaInfo const&);

    MCAPI void* ctor$(struct cereal::ext::internal::JSONSchemaInfo&&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace cereal::ext::internal
