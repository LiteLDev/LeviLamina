#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerValidationCraftResult {
public:
    // prevent constructor by default
    ContainerValidationCraftResult& operator=(ContainerValidationCraftResult const&);
    ContainerValidationCraftResult(ContainerValidationCraftResult const&);

public:
    // NOLINTBEGIN
    MCAPI ContainerValidationCraftResult();

    MCAPI ContainerValidationCraftResult(struct ContainerValidationCraftResult&&);

    MCAPI ~ContainerValidationCraftResult();

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
