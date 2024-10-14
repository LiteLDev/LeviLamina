#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/ecs/systems/SystemInfo.h"

struct InternalSystemInfo : public SystemInfo {
public:
    // NOLINTBEGIN
    MCAPI InternalSystemInfo(struct InternalSystemInfo&&);

    MCAPI ~InternalSystemInfo();

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
