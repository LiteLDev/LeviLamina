#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandSelector.h"

struct GenerateMessageResult {
public:
    std::string                                   string;
    std::unique_ptr<CommandSelector<class Actor>> selection;

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
