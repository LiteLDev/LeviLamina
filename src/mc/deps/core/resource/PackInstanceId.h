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
    MCAPI void* ctor$(struct PackIdVersion const& packId, std::string const& subpackName);

    MCAPI void* ctor$(struct PackInstanceId&&);

    MCAPI void dtor$();

    // NOLINTEND
};
