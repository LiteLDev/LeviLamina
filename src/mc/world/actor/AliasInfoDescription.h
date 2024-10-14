#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AliasInfoDescription {
public:
    // prevent constructor by default
    AliasInfoDescription();

public:
    // NOLINTBEGIN
    MCAPI AliasInfoDescription(struct AliasInfoDescription const&);

    MCAPI struct AliasInfoDescription& operator=(struct AliasInfoDescription const&);

    MCAPI ~AliasInfoDescription();

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
