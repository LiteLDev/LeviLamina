#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentItemData_Legacy {
public:
    // prevent constructor by default
    ComponentItemData_Legacy();

public:
    // NOLINTBEGIN
    MCAPI ComponentItemData_Legacy(struct ComponentItemData_Legacy&&);

    MCAPI ComponentItemData_Legacy(struct ComponentItemData_Legacy const&);

    MCAPI struct ComponentItemData_Legacy& operator=(struct ComponentItemData_Legacy&&);

    MCAPI struct ComponentItemData_Legacy& operator=(struct ComponentItemData_Legacy const&);

    MCAPI ~ComponentItemData_Legacy();

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
