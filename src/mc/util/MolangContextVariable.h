#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangContextVariable {
public:
    // prevent constructor by default
    MolangContextVariable& operator=(MolangContextVariable const&);
    MolangContextVariable(MolangContextVariable const&);
    MolangContextVariable();

public:
    // NOLINTBEGIN
    MCAPI explicit MolangContextVariable(class HashedString const& value);

    MCAPI ~MolangContextVariable();

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
