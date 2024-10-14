#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct FunctionBinding {
public:
    // prevent constructor by default
    FunctionBinding& operator=(FunctionBinding const&);
    FunctionBinding();

public:
    // NOLINTBEGIN
    MCAPI FunctionBinding(struct Scripting::FunctionBinding&&);

    MCAPI FunctionBinding(struct Scripting::FunctionBinding const&);

    MCAPI ~FunctionBinding();

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
