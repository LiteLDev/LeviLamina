#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ArgumentDetails {
public:
    // prevent constructor by default
    ArgumentDetails& operator=(ArgumentDetails const&);
    ArgumentDetails();

public:
    // NOLINTBEGIN
    MCAPI ArgumentDetails(struct Scripting::ArgumentDetails const&);

    MCAPI ~ArgumentDetails();

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
