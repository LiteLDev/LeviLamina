#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandSelector.h"

struct GenerateMessageResult {
public:
    std::string mString; // this+0x0
    bool        mUnknow; // this+0x20

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
