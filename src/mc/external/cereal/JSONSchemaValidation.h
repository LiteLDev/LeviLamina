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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace cereal::ext::internal
