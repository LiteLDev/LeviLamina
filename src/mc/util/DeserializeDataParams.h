#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DeserializeDataParams {
public:
    // prevent constructor by default
    DeserializeDataParams& operator=(DeserializeDataParams const&);
    DeserializeDataParams(DeserializeDataParams const&);
    DeserializeDataParams();

public:
    // NOLINTBEGIN
    MCAPI ~DeserializeDataParams();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
