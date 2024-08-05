#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ConstDeserializeDataParams {
public:
    // prevent constructor by default
    ConstDeserializeDataParams& operator=(ConstDeserializeDataParams const&);
    ConstDeserializeDataParams(ConstDeserializeDataParams const&);
    ConstDeserializeDataParams();

public:
    // NOLINTBEGIN
    MCAPI ~ConstDeserializeDataParams();

    // NOLINTEND
};
