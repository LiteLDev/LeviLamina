#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::ext::internal {

struct JSONSchemaValidation {
public:
    // prevent constructor by default
    JSONSchemaValidation();

public:
    // NOLINTBEGIN
    // symbol: ??0JSONSchemaValidation@internal@ext@cereal@@QEAA@AEBU0123@@Z
    MCAPI JSONSchemaValidation(struct cereal::ext::internal::JSONSchemaValidation const&);

    // symbol: ??4JSONSchemaValidation@internal@ext@cereal@@QEAAAEAU0123@$$QEAU0123@@Z
    MCAPI struct cereal::ext::internal::JSONSchemaValidation&
    operator=(struct cereal::ext::internal::JSONSchemaValidation&&);

    // symbol: ??4JSONSchemaValidation@internal@ext@cereal@@QEAAAEAU0123@AEBU0123@@Z
    MCAPI struct cereal::ext::internal::JSONSchemaValidation&
    operator=(struct cereal::ext::internal::JSONSchemaValidation const&);

    // symbol: ??1JSONSchemaValidation@internal@ext@cereal@@QEAA@XZ
    MCAPI ~JSONSchemaValidation();

    // NOLINTEND
};

}; // namespace cereal::ext::internal
