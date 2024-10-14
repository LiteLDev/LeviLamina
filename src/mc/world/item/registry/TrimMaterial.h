#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TrimMaterial {
public:
    // prevent constructor by default
    TrimMaterial& operator=(TrimMaterial const&);
    TrimMaterial(TrimMaterial const&);
    TrimMaterial();

public:
    // NOLINTBEGIN
    MCAPI TrimMaterial(struct TrimMaterial&&);

    MCAPI ~TrimMaterial();

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
