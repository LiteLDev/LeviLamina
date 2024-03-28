#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandSelector.h"

struct GenerateMessageResult {
public:
    std::string string;
    bool        unk;

    // prevent constructor by default
    GenerateMessageResult& operator=(GenerateMessageResult const&);
    GenerateMessageResult(GenerateMessageResult const&);
    GenerateMessageResult();

public:
    // NOLINTBEGIN
    // symbol: ??1GenerateMessageResult@@QEAA@XZ
    MCAPI ~GenerateMessageResult();

    // NOLINTEND
};
