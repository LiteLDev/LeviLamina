#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangEntityVariable {
public:
    // prevent constructor by default
    MolangEntityVariable& operator=(MolangEntityVariable const&);
    MolangEntityVariable(MolangEntityVariable const&);
    MolangEntityVariable();

public:
    // NOLINTBEGIN
    MCAPI explicit MolangEntityVariable(class HashedString const& value);

    MCAPI ~MolangEntityVariable();

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
