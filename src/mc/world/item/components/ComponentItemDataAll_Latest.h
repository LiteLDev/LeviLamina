#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentItemDataAll_Latest {
public:
    // prevent constructor by default
    ComponentItemDataAll_Latest& operator=(ComponentItemDataAll_Latest const&);
    ComponentItemDataAll_Latest(ComponentItemDataAll_Latest const&);

public:
    // NOLINTBEGIN
    MCAPI ComponentItemDataAll_Latest();

    MCAPI ComponentItemDataAll_Latest(struct ComponentItemDataAll_Latest&&);

    MCAPI ~ComponentItemDataAll_Latest();

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
