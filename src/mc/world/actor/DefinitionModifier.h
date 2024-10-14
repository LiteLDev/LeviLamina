#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DefinitionModifier {
public:
    // prevent constructor by default
    DefinitionModifier& operator=(DefinitionModifier const&);
    DefinitionModifier();

public:
    // NOLINTBEGIN
    MCAPI DefinitionModifier(struct DefinitionModifier const&);

    MCAPI ~DefinitionModifier();

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
