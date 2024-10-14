#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NameAction {
public:
    // prevent constructor by default
    NameAction& operator=(NameAction const&);
    NameAction();

public:
    // NOLINTBEGIN
    MCAPI NameAction(struct NameAction const&);

    MCAPI void addNameFilterByName(std::string const& name);

    MCAPI ~NameAction();

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
