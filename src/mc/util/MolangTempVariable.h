#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangTempVariable {
public:
    // prevent constructor by default
    MolangTempVariable& operator=(MolangTempVariable const&);
    MolangTempVariable(MolangTempVariable const&);
    MolangTempVariable();

public:
    // NOLINTBEGIN
    MCAPI explicit MolangTempVariable(class HashedString const& value);

    MCAPI ~MolangTempVariable();

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
