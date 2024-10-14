#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/ecs/systems/Dependencies.h"

struct SystemInfo {
    std::string  mName;
    Dependencies mDependencies;
    void*        mGenerateDetailedInfo;

public:
    // prevent constructor by default
    SystemInfo& operator=(SystemInfo const&);
    SystemInfo(SystemInfo const&);
    SystemInfo();

public:
    // NOLINTBEGIN
    MCAPI SystemInfo(struct SystemInfo&&);

    MCAPI ~SystemInfo();

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
