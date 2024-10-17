#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::ext::internal {

struct JSONSchemaValidation {
public:
    // prevent constructor by default
    JSONSchemaValidation();

public:
    // NOLINTBEGIN
    MCAPI JSONSchemaValidation(struct cereal::ext::internal::JSONSchemaValidation const&);

    MCAPI struct cereal::ext::internal::JSONSchemaValidation&
    operator=(struct cereal::ext::internal::JSONSchemaValidation&&);

    MCAPI struct cereal::ext::internal::JSONSchemaValidation&
    operator=(struct cereal::ext::internal::JSONSchemaValidation const&);

    MCAPI ~JSONSchemaValidation();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct cereal::ext::internal::JSONSchemaValidation const&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace cereal::ext::internal
