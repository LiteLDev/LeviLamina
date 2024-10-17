#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct PropertyBinding {
public:
    // prevent constructor by default
    PropertyBinding& operator=(PropertyBinding const&);

public:
    // NOLINTBEGIN
    MCAPI PropertyBinding();

    MCAPI PropertyBinding(struct Scripting::PropertyBinding&&);

    MCAPI PropertyBinding(struct Scripting::PropertyBinding const&);

    MCAPI bool isValidPropertyValue(entt::meta_any const& any) const;

    MCAPI ~PropertyBinding();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(struct Scripting::PropertyBinding const&);

    MCAPI void* ctor$(struct Scripting::PropertyBinding&&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
