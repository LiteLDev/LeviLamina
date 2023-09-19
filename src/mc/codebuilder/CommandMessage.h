#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct CommandMessage {
public:
    // prevent constructor by default
    CommandMessage& operator=(CommandMessage const&);
    CommandMessage(CommandMessage const&);
    CommandMessage();

public:
    // NOLINTBEGIN
    // symbol: ??1CommandMessage@CodeBuilder@@QEAA@XZ
    MCAPI ~CommandMessage();

    // NOLINTEND
};

}; // namespace CodeBuilder
