#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandOriginData {
public:
    // NOLINTBEGIN
    MCAPI CommandOriginData();

    MCAPI CommandOriginData(struct CommandOriginData const& other);

    MCAPI struct CommandOriginData& operator=(struct CommandOriginData const& rhs);

    MCAPI ~CommandOriginData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct CommandOriginData const& other);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
