#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ArgumentBinding {
public:
    // prevent constructor by default
    ArgumentBinding& operator=(ArgumentBinding const&);
    ArgumentBinding(ArgumentBinding const&);

public:
    // NOLINTBEGIN
    MCAPI ArgumentBinding();

    MCAPI ArgumentBinding(struct Scripting::ArgumentBinding&&);

    MCAPI ~ArgumentBinding();

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
