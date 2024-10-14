#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GenerateMessageResult {
public:
    // prevent constructor by default
    GenerateMessageResult& operator=(GenerateMessageResult const&);
    GenerateMessageResult(GenerateMessageResult const&);
    GenerateMessageResult();

public:
    // NOLINTBEGIN
    MCAPI ~GenerateMessageResult();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
