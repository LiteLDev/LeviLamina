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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
