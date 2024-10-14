#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TickingSystemWithInfo {
public:
    // prevent constructor by default
    TickingSystemWithInfo& operator=(TickingSystemWithInfo const&);
    TickingSystemWithInfo(TickingSystemWithInfo const&);
    TickingSystemWithInfo();

public:
    // NOLINTBEGIN
    MCAPI TickingSystemWithInfo(struct TickingSystemWithInfo&&);

    MCAPI ~TickingSystemWithInfo();

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
