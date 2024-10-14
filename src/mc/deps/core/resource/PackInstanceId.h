#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackInstanceId {
public:
    // prevent constructor by default
    PackInstanceId& operator=(PackInstanceId const&);
    PackInstanceId(PackInstanceId const&);
    PackInstanceId();

public:
    // NOLINTBEGIN
    MCAPI PackInstanceId(struct PackInstanceId&&);

    MCAPI PackInstanceId(struct PackIdVersion const& packId, std::string const& subpackName);

    MCAPI ~PackInstanceId();

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
